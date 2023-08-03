# Smart-parking-system
This repository contains the code and documentation for a Smart Parking System implemented using Arduino IDE. The system is designed to efficiently manage and monitor parking spaces, providing real-time information about the availability of parking spots.

### Table of Contents: 
1. Introduction
2. Features
3. Components
4. Installation
5. Usage
6. Future Improvements
7. Contributing
8. License 

## Introduction

The Smart Parking System is a solution to address the challenges of urban parking management. It utilizes Arduino boards and sensors to keep track of parking space occupancy and provides users with up-to-date parking spot availability information. The system aims to reduce congestion and enhance user convenience.

## Features

Real-time monitoring of parking space occupancy.
LED indicators for available and occupied parking spots.
User-friendly display showing the total number of available spots.
Entry and exit detection for accurate status updates.

## Components

Arduino Uno or compatible board
Ultrasonic distance sensors
LEDs (green and red)
7-segment display
Breadboard and jumper wires

## Installation

Clone this repository to your local machine using:
bash
Copy code
git clone https://github.com/your-username/smart-parking-system.git
Connect the Arduino board to your computer using a USB cable.
Open the Arduino IDE and navigate to File > Open. Select the smart_parking_system.ino file from the cloned repository.
Configure the pins for ultrasonic sensors, LEDs, and the 7-segment display based on your circuit connections.
Upload the sketch to your Arduino board by clicking the "Upload" button in the Arduino IDE.

## Usage

Assemble the circuit according to the provided schematics.
Power up the system using an appropriate power source.
The LEDs will indicate the availability of parking spots:
Green LED: Parking spot available
Red LED: Parking spot occupied
The 7-segment display will show the total number of available spots.
Test the system by moving objects within the range of the ultrasonic sensors to simulate parking spot occupancy.

## Future Improvements

Integration with a mobile app for remote parking spot reservation.
Cloud connectivity for centralized data collection and analysis.
Integration of cameras for license plate recognition.

## Contributing

Contributions are welcome! If you have any ideas for improvements or new features, feel free to fork this repository and submit a pull request.

## License

This project is licensed under the MIT License.

Note: This README provides a basic overview of the Smart Parking System. For detailed instructions, circuit diagrams, and code explanations, refer to the repository's documentation.

For any questions or inquiries, please contact manavbehl13@gmail.com
