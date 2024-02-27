# Smart Home System

## Overview
The Smart Home System project integrates master and slave microcontrollers to create an intelligent home automation solution. The system enables users to remotely control home appliances and monitor environmental conditions for optimal comfort and energy efficiency.

## Components
## Microcontrollers
- **Description:** Control the operation of the smart home system and manage communication between the master and slave microcontrollers.
- **Models:** ATMEGA32.
  
### LCD Display
- **Description:** Provides visual feedback to users, displaying system status and allowing user authentication.
- **Features:** Utilizes an LCD screen for user interactions and authentication purposes.

## Sensors
- **Description:** Interfaces with temperature sensors to monitor environmental conditions.
- **Components:** Include sensors specifically designed for temperature monitoring.
  
## Features
- **Appliance Control:** Allows users to remotely turn on/off home appliances such as lights, air conditioning, and television.
- **Temperature Monitoring:** Continuously monitors room temperature and adjusts air conditioning settings based on user-defined thresholds.
- **User Authentication:** Utilizes the LCD display for user authentication, distinguishing between administrators and regular users for access control.

## Getting Started
### Hardware Setup
- Connect the master and slave microcontrollers along with the necessary sensors, actuators, and LCD display.
### Software Setup
1. Program the microcontrollers with the provided firmware code.
2. Configure the system to establish communication between master and slave devices.
### Integration
Ensure proper integration between master and slave devices, following the defined communication protocol.
### Power On
Power on the system and follow the LCD prompts for user authentication and system operation.

## Communication Protocol
The communication protocol between master and slave devices is SPI, it's enables the exchange of commands and data for controlling appliances and exchanging status information.

## Dependencies
- **AVR Toolchain:** Compiler and toolchain for building AVR-based projects.
- **DIO Driver:** Driver for interfacing with digital input/output (DIO) pins.
- **SPI Driver:** Driver for SPI communication protocol.
- **ADC Driver:** Driver for analog-to-digital conversion.
- **Keypad Driver:** Driver for interfacing with keypad input devices.
- **EEPROM Driver:** Driver for interfacing with EEPROM memory.
- **Timer Driver:** Driver for managing timer modules.
- **LCD Driver:** Library for interfacing with the LCD display.

## License
This project is licensed under the Online diploma with Eng.Mohamed zaghloul.
