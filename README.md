# Robotic Vacuum Cleaner with Self-Charging Power Station

An autonomous robotic solution designed for efficient floor cleaning, equipped with a self-charging mechanism to return to a docking station when battery levels are low. This project integrates sensor technologies, real-time pathfinding algorithms, and efficient power management to provide a fully autonomous floor-cleaning experience.

---

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Hardware Components](#hardware-components)
4. [Software Components](#software-components)
5. [Installation](#installation)
6. [Usage](#usage)
7. [Project Structure](#project-structure)
8. [Contributing](#contributing)
9. [Acknowledgments](#acknowledgments)

---

## Introduction

This project focuses on creating a robotic floor cleaner that can autonomously navigate an indoor environment, clean surfaces using a mop, and automatically return to a charging station when the battery is low. Utilizing ultrasonic and infrared sensors, along with SLAM and A* pathfinding algorithms, the robot detects obstacles, determines optimal cleaning paths, and ensures complete floor coverage.

---

## Features

- **Autonomous Navigation**: Self-guided movement with real-time obstacle avoidance.
- **Self-Charging Mechanism**: Automatically returns to the charging dock when battery levels are low.
- **Efficient Cleaning Coverage**: Uses SLAM and A* algorithms for optimized pathfinding and cleaning coverage.
- **Sensor-Based Safety**: Equipped with ultrasonic and infrared sensors to detect obstacles and avoid falls.
- **Mopping Capability**: Cleans floors effectively using a mop attachment.
- **Battery Management**: Power-efficient operations and low-battery detection to preserve energy.

---

## Hardware Components

- **Microcontroller**: ESP8266
- **Motors**: Brushless DC (BLDC) motors for movement
- **Sensors**:
  - Ultrasonic sensors for obstacle detection
  - Infrared sensors for floor-level detection
- **Battery**: 7.4V Li-ion battery with Battery Management System (BMS)
- **Other Components**:
  - Docking station for automatic charging
  - DFPlayer Mini for audio signals (optional)

---

## Software Components

- **Programming Language**: Python
- **Algorithms**:
  - **SLAM (Simultaneous Localization and Mapping)**: For mapping the environment and determining the robot’s position.
  - **A* Pathfinding Algorithm**: For finding the shortest and most efficient path to the docking station.
- **Development Tools**:
  - Visual Studio Code
  - MATLAB for sensor simulation (optional)
  - MicroVision for microcontroller programming
  - Proteus for circuit simulation

---

## Setup and Installation

1. **Assemble the Hardware**:
   - Attach motors, sensors, and other components to the robot chassis.
   - Set up the docking station with proper charging connectors.

2. **Install Microcontroller Software**:
   - Upload the code to the ESP8266 microcontroller, ensuring it includes navigation and sensor handling logic.

3. **Configure Power Management**:
   - Calibrate the BMS for safe charging and discharging cycles.

4. **Install Software Dependencies**:
   - On your development machine, install necessary Python libraries:
     ```bash
     pip install pandas numpy matplotlib
     ```

5. **Upload the Code**:
   - Upload the main navigation and control code to the microcontroller.

---

## Usage

To effectively use the Robotic Vacuum Cleaner, follow these steps:

1. **Power On**:
   - Ensure the robot is fully charged. 
   - Turn on the robot using the power switch located on the main body.
   - Place the robot in the designated cleaning area, ensuring it has enough space to maneuver.

2. **Start Cleaning**:
   - Once powered on, the robot will automatically begin its cleaning routine.
   - It will navigate through the designated area, utilizing its sensors to avoid obstacles and cover the floor efficiently.

3. **Automatic Docking**:
   - The robot is equipped with a low-battery detection feature. 
   - When battery levels drop to a certain threshold, the robot will halt its cleaning process and autonomously navigate back to the charging dock.
   - The A* pathfinding algorithm ensures the robot takes the most efficient route to the dock, minimizing time and energy consumption.

4. **Manual Override (if applicable)**:
   - If you wish to take control of the robot during its cleaning cycle, you can use the remote control or companion app (if developed).
   - The manual control option allows you to steer the robot, pause its operation, or send it to specific areas for targeted cleaning.
   - Additionally, the app can provide real-time status updates and monitoring of the robot's cleaning progress.

---

## How It Works

The robotic vacuum cleaner operates through a combination of hardware components and software algorithms that work together to provide an efficient cleaning experience. Below is an overview of the key processes involved in its operation:

1. **Initialization**:
   - When powered on, the robot performs a self-check to ensure all components are functioning properly. It initializes the sensors and motors and prepares for navigation.

2. **Environment Mapping**:
   - The robot uses the SLAM (Simultaneous Localization and Mapping) algorithm to create a map of the environment as it moves. The ultrasonic and infrared sensors detect obstacles and measure distances, allowing the robot to build a spatial representation of the area it needs to clean.

3. **Obstacle Detection and Navigation**:
   - The ultrasonic sensors continuously scan the environment to detect obstacles in real-time. When an obstacle is detected, the robot employs the A* pathfinding algorithm to calculate an optimal route around the obstacle, ensuring it can navigate efficiently without getting stuck.

4. **Cleaning Process**:
   - The robot uses a mop attachment to clean floors as it navigates. Water or cleaning solution is distributed onto the mop to ensure effective cleaning. The robot adjusts its speed and movement patterns based on the detected floor type to optimize cleaning efficiency.

5. **Power Management**:
   - The robot monitors its battery levels throughout the cleaning process. When the battery reaches a predefined low level, the robot ceases cleaning operations and initiates the self-docking process.

6. **Self-Docking**:
   - Using the A* algorithm, the robot calculates the best path back to the docking station. It navigates back, avoiding obstacles along the way. Once it reaches the docking station, the robot connects to the charger and begins recharging its battery.

7. **User Interaction**:
   - Users can start or stop the cleaning process manually using a remote control or companion app (if developed). The app can also provide real-time status updates and control options for the robot.

By combining advanced sensor technology, intelligent algorithms, and efficient power management, this robotic vacuum cleaner is designed to provide a hassle-free cleaning experience, maintaining clean floors autonomously.

---

## Future Improvements

- **Enhanced Remote Control**: Adding WiFi or Bluetooth for better remote control.
- **Obstacle Avoidance with AI**: Use AI-based object recognition to distinguish between obstacles.
- **Floor Type Detection**: Differentiate floor types and adjust cleaning methods accordingly.
- **App Integration**: Develop a mobile app for real-time monitoring and control.

---

## Contributing

Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch: `git checkout -b feature-name`.
3. Commit your changes: `git commit -m 'Add feature-name'`.
4. Push to the branch: `git push origin feature-name`.
5. Open a pull request.

---

## Contact

For inquiries or feedback, please contact:

- **Name**: Rohit Rajput
- **Email**: iamrohitrajput21@gmail.com
- **Phone**: +91 75177 13810
- **GitHub**: [RohitRajput021](https://github.com/RohitRajput021)
- **LinkedIn**: [rajputrohit21](https://www.linkedin.com/in/rajputrohit21)

---
