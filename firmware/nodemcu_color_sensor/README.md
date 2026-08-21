# Node MCU Color Sensor Program

## Description
This program interfaces the TCS3200 color sensor with Node MCU ESP8266 to detect RGB colors and send data to ThingSpeak cloud.

## Features
- Real-time color detection (Red, Green, Blue)
- Relay control based on detected color
- Servo control for gripper mechanism
- ThingSpeak cloud integration
- WiFi connectivity

## Required Libraries
1. ESP8266WiFi
2. ThingSpeak
3. Servo

## Pin Connections
| TCS3200 | Node MCU |
|---------|----------|
| S0 | D3 |
| S1 | D4 |
| S2 | D5 |
| S3 | D6 |
| OUT | D7 |
| VCC | 3.3V |
| GND | GND |

## Setup
1. Open in Arduino IDE
2. Install required libraries
3. Update WiFi credentials
4. Upload to Node MCU
