// Rohit Jyotising Rajput
// 2-11-2024

#include <Servo.h>

// Pin Definitions
#define TRIG_PIN D1       // Trigger pin for ultrasonic sensor
#define ECHO_PIN D2       // Echo pin for ultrasonic sensor
#define MOTOR_LEFT_IN1 D3 // Left motor input 1
#define MOTOR_LEFT_IN2 D4 // Left motor input 2
#define MOTOR_RIGHT_IN1 D5 // Right motor input 1
#define MOTOR_RIGHT_IN2 D6 // Right motor input 2
#define SERVO_PIN D7      // Servo pin for mop control
#define MOP_MOTOR_PIN D8  // Mop motor control pin
#define BATTERY_PIN A0    // Analog pin for battery level

Servo servo;
int chargingStationX = 0; // X-coordinate of charging station
int chargingStationY = 0; // Y-coordinate of charging station
int robotX = 5, robotY = 5; // Initial robot position
bool grid[10][10]; // Grid for obstacle and path planning (10x10 for simplicity)
bool mopActive = true; // Flag for mop motor status

// Function to control motors
void moveForward() {
  digitalWrite(MOTOR_LEFT_IN1, HIGH);
  digitalWrite(MOTOR_LEFT_IN2, LOW);
  digitalWrite(MOTOR_RIGHT_IN1, HIGH);
  digitalWrite(MOTOR_RIGHT_IN2, LOW);
}

void moveBackward() {
  digitalWrite(MOTOR_LEFT_IN1, LOW);
  digitalWrite(MOTOR_LEFT_IN2, HIGH);
  digitalWrite(MOTOR_RIGHT_IN1, LOW);
  digitalWrite(MOTOR_RIGHT_IN2, HIGH);
}

void stopMotors() {
  digitalWrite(MOTOR_LEFT_IN1, LOW);
  digitalWrite(MOTOR_LEFT_IN2, LOW);
  digitalWrite(MOTOR_RIGHT_IN1, LOW);
  digitalWrite(MOTOR_RIGHT_IN2, LOW);
}

void turnLeft() {
  digitalWrite(MOTOR_LEFT_IN1, LOW);
  digitalWrite(MOTOR_LEFT_IN2, HIGH);
  digitalWrite(MOTOR_RIGHT_IN1, HIGH);
  digitalWrite(MOTOR_RIGHT_IN2, LOW);
  delay(500); // Adjust delay for accurate turn
  stopMotors();
}

void turnRight() {
  digitalWrite(MOTOR_LEFT_IN1, HIGH);
  digitalWrite(MOTOR_LEFT_IN2, LOW);
  digitalWrite(MOTOR_RIGHT_IN1, LOW);
  digitalWrite(MOTOR_RIGHT_IN2, HIGH);
  delay(500); // Adjust delay for accurate turn
  stopMotors();
}

// Function to read distance from ultrasonic sensor
int readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  int duration = pulseIn(ECHO_PIN, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}

// Function to control mop motor
void controlMop() {
  if (mopActive) {
    digitalWrite(MOP_MOTOR_PIN, HIGH); // Activate mop motor
  } else {
    digitalWrite(MOP_MOTOR_PIN, LOW); // Deactivate mop motor
  }
}

// Zigzag cleaning pattern
void cleanInZigzag() {
  for (int i = 0; i < 10; i++) {
    moveForward();
    delay(2000); // Move forward for 2 seconds
    stopMotors();
    delay(500);

    // Check for obstacles
    int distance = readDistance();
    if (distance < 20) { // Obstacle detected within 20 cm
      avoidObstacle();
    }

    // Alternate turns to create zigzag pattern
    if (i % 2 == 0) {
      turnRight();
    } else {
      turnLeft();
    }
    controlMop(); // Keep mop running while cleaning
  }
}

// Obstacle avoidance function
void avoidObstacle() {
  stopMotors();
  delay(500);
  turnRight(); // Turn right to avoid obstacle
  moveForward();
  delay(1000); // Move forward for 1 second to avoid obstacle
  stopMotors();
}

// A* pathfinding function to calculate path to charging station
void aStarPathfinding() {
  // Example: Simple logic to move towards charging station coordinates
  while (robotX != chargingStationX || robotY != chargingStationY) {
    if (robotX < chargingStationX) {
      robotX++;
      moveForward();
      delay(500);
    } else if (robotX > chargingStationX) {
      robotX--;
      moveBackward();
      delay(500);
    }
    stopMotors();
    delay(500);
  }
}

// Main setup
void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(MOTOR_LEFT_IN1, OUTPUT);
  pinMode(MOTOR_LEFT_IN2, OUTPUT);
  pinMode(MOTOR_RIGHT_IN1, OUTPUT);
  pinMode(MOTOR_RIGHT_IN2, OUTPUT);
  pinMode(MOP_MOTOR_PIN, OUTPUT); // Set mop motor pin as output
  
  servo.attach(SERVO_PIN);
  servo.write(90); // Center servo initially

  Serial.begin(115200);
}

// Main loop
void loop() {
  cleanInZigzag(); // Perform cleaning in zigzag pattern
  
  // Check battery level (simulation of low battery)
  int batteryLevel = analogRead(BATTERY_PIN);
  if (batteryLevel < 20) { // Threshold for low battery
    Serial.println("Battery low. Returning to charging station.");
    mopActive = false; // Stop mop when battery is low
    controlMop();
    aStarPathfinding(); // Return to charging station using A* pathfinding
  } else {
    mopActive = true; // Activate mop if battery is okay
  }
  controlMop(); // Continuously control mop based on battery level
}
