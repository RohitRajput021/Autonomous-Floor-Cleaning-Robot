# Robotic Vacuum Cleaner with Self-Charging Power Station

This project involves a robotic vacuum cleaner equipped with sensors and navigation algorithms to efficiently clean rooms. It can detect obstacles, navigate using SLAM (Simultaneous Localization and Mapping) and A* pathfinding algorithms, and automatically return to its docking station for recharging.

---

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Future Improvements](#future-improvements)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

---

## Overview

The robotic vacuum cleaner is designed to autonomously clean a designated area without human intervention. Utilizing various sensors, the robot navigates around obstacles, detects floor levels, and maps its surroundings. When the battery is low, it automatically returns to the charging station to recharge before resuming cleaning.

---

## Features

- **Autonomous Navigation**: Utilizes SLAM for mapping and A* algorithm for pathfinding.
- **Obstacle Detection**: Equipped with ultrasonic and infrared sensors to avoid obstacles.
- **Self-Charging**: Automatically returns to its docking station when the battery is low.
- **Mopping Capability**: Cleans floors effectively using a mop attachment.
- **Remote Control & Monitoring**: Capable of connecting to the internet for remote control and status updates.

---

## Hardware Requirements

- **Robot Chassis** with motors (BLDC preferred for efficiency)
- **Ultrasonic Sensors** for obstacle detection
- **Infrared Sensors** for floor-level detection
- **Battery**: 7.4V Li-ion battery with BMS (Battery Management System)
- **Docking Station**: Equipped for automatic charging
- **Microcontroller**: ESP8266 or similar for control and communication
- **Additional Components**: DFPlayer Mini for sound alerts, wheel encoders (if precise movement is required)

---

## Software Requirements

- **Programming Language**: Python for algorithm development
- **Development Tools**: Visual Studio Code, MicroVision, Proteus for simulation
- **Libraries**:
  - `pandas`, `NumPy`, `Matplotlib` (for data analysis and debugging)
  - Microcontroller SDK for ESP8266
  - SLAM and A* pathfinding libraries

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

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

---

## Contact

For inquiries or feedback, please contact:

- **Name**: Rohit Rajput
- **Email**: iamrohitrajput21@gmail.com
- **Phone**: +91 75177 13810
- **GitHub**: [RohitRajput021](https://github.com/RohitRajput021)
- **LinkedIn**: [rajputrohit21](https://www.linkedin.com/in/rajputrohit21)

---
