
# Home Automation System

Home automation systems have gained significant popularity in recent years, offering convenience, energy efficiency, and security for homeowners. This project demonstrates a home automation system using an Arduino UNO, various sensors, and actuators. The system combines multiple functionalities, including lighting control, motion detection, door control using an ultrasonic sensor and servo motor, gas detection for fire alarm, and automatic night lighting. It is a practical example of the Internet of Things (IoT) in action, improving the quality of life and safety within a home.

## Table of Contents

- Installation
- Project Link
- Project Components
- Features
- Getting Started
- Schematic
- Usage
- Contributing
- Acknowledgements
- License
## Installation

```bash
  -Go to my project link below
  -Tinker/Copy it on your account
  -Run Locally by starting Simulation
```
    
## Poject Link

https://www.tinkercad.com/things/fLdVD8Abfe1?sharecode=bZWgzM9gJUmzTjmZ2hVsbszoeDLmXNDSF5nzhe4EpI0 
## Project Components

 - Arduino Uno R3
 - PIR Sensor
 - Ultrasonic Distance Sensor
 - DC Motor
 - 5, 5 Power Supply
 - Gas Sensor
 - Piezo Alarm
 - Positional Micro Servo
 - Light bulb
 - Relay SPDT
 - Photoresistor
 - 1 kΩ Resistor
 - Slide switch



## Features

- **Light Intensity Control:** The system adjusts lighting based on ambient light levels, ensuring energy-efficient illumination.

- **Light and Fan Control:** Motion detection triggers lights and a fan for enhanced security and convenience.

- **Gas Sensor:** Monitors for gas leaks and activates a buzzer for safety.

- **Servo-Controlled Door:** The system can open and close a door using a servo motor, enhancing security and accessibility.

## Getting Started

For Actual Implementation

    1. Clone this repository to your local machine.

    2. Open the `home_automation1.ino` file using the Arduino IDE.

    3. Upload the code to your Arduino UNO R3.

    4. Wire up the hardware components as per the provided schematic.

    5. Power on your Arduino and interact with the system.

    6. Note the Obeservations
## Schematic

![Circuit Diagram](https://github.com/Shreerang01/Home-Automation/assets/113919844/6ea9f931-d45d-422e-aff2-a76356a7d161)
## Usage

### Setting up the Parking Sensor System

- **Hardware Setup:**

    1) Arduino UNO Installation:

    Connect the Arduino UNO board to your computer using a USB cable.
    Ensure that the board is powered and recognized by your computer.

    2) Sensor and Actuator Connections:

    Connect the PIR sensor, ultrasonic sensor, LDR, relays, gas sensor, and servo motor to the appropriate pins on the Arduino UNO. Refer to the provided schematics or pin configurations in the code.

    3) Power Supply:

    Ensure that the Arduino UNO has a stable power supply. This may involve using a USB power adapter or a suitable battery source.

- **Software Setup:**

    1) Arduino IDE Installation:

    Download and install the Arduino IDE on your computer if you haven't already.

    2) Uploading the Code:

    Open the Arduino IDE on your computer.
    Load the Arduino source code provided in this repository (located in the 'code' folder).
    Select the appropriate Arduino board (Arduino UNO) and the correct port in the Arduino IDE.
    Upload the code to the Arduino UNO.



## Contributing

Contributions are always welcome!

See `contributing.md` for ways to get started.

Please adhere to this project's `code of conduct`.

Anyone can contribute to the project by simply tinkering the project to your local machine and adding new features and functionalities and and making it more useful.

## Acknowledgements

 - [safewise.com ](https://www.safewise.com/home-security-faq/how-does-home-automation-work/ )

 - [google.com/welcome/ ](https://home.google.com/welcome/   )

 - [techtarget  ](https://www.techtarget.com/iotagenda/definition/smart-home-or-building )

 - [researchgate  ](https://www.researchgate.net/publication/275338025_Home_Automation_Systems_-_A_Study  )

 - [engpaper  ](https://www.engpaper.com/ece/home-automation-2021.html   )
 
  - [Arduino Documentation  ](https://docs.arduino.cc/hardware/uno-rev3 )

 



## License

[MIT](https://choosealicense.com/licenses/mit/)

