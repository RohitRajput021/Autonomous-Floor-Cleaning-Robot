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

1. **Starting the Robot**:
   - Place the robot on the floor in the desired cleaning area.
   - Power it on and initialize its connection to the gateway for remote control if necessary.

2. **Automatic Cleaning**:
   - The robot will begin cleaning and avoiding obstacles autonomously.

3. **Self-Charging**:
   - When the battery is low, the robot will navigate back to the docking station for charging.

---

## How It Works

- **Navigation**: The robot uses SLAM to create a map of the environment, and the A* algorithm helps it find the shortest path to clean and return to the docking station.
- **Obstacle Detection**: Ultrasonic and infrared sensors help detect obstacles and adjust the path.
- **Self-Charging**: Using the location data from SLAM, the robot can find its way back to the docking station when the battery is low.

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
