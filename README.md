# ASPPSBC-Color-Sorting-Pick-Place
# ASPPSBC Project - Color Sorting, Pick & Place Station

## 📌 Project Overview

The **Automated Sorting, Pick and Place System using Belt Conveyor (ASPPSBC)** is an industrial automation project that sorts objects based on color and performs pick-and-place operations using a robotic gripper.

This repository focuses on **Module 4: Electronics & IoT Implementation**, which includes:
- Node MCU (ESP8266) for IoT connectivity
- TCS3200 Color Sensor for color detection
- Servo motors for gripper control
- Arduino Uno for Bluetooth control
- MIT App Inventor for manual control
- ThingSpeak cloud platform for real-time data monitoring

---

## 🚀 Features

- **Color Detection**: TCS3200 sensor detects Red, Green, and Blue objects
- **IoT Integration**: Real-time data sent to ThingSpeak cloud
- **Mobile Control**: Manual operation via Bluetooth using MIT App Inventor
- **Automated Sorting**: Objects sorted by color using pneumatic cylinder
- **Pick & Place**: Servo-controlled gripper picks and places objects
- **PLC Integration**: Works with Delta PLC (DVP-14SS2) for conveyor control

---

## 🧩 System Architecture
mated Sorting**: Objects sorted by color using pneumatic cylinder
- **Pick & Place**: Servo-controlled gripper picks and places objects
- **PLC Integration**: Works with Delta PLC (DVP-14SS2) for conveyor control

---

## 🧩 System Architecture
┌─────────────────────────────────────────────────────────┐
│ ASPPSBC System │
├─────────────────────────────────────────────────────────┤
│ │
│ Color Sensor ──► Node MCU ──► ThingSpeak Cloud │
│ (TCS3200) (ESP8266) (Dashboard) │
│ │ │
│ ▼ │
│ Arduino Uno ◄── Bluetooth ◄── MIT App │
│ (Control) (HC-05) (Mobile App) │
│ │ │
│ ▼ │
│ Relay Module ──► Servo Motors ──► Gripper │
│ (4-Channel) (MG995, 9G) (Acrylic) │
│ │
│ PLC (Delta) ──► Conveyor & Pneumatic Cylinder │
│ │
└─────────────────────────────────────────────────────────┘

---

## 🛠️ Hardware Components

| Component | Model/Specification | Quantity |
|-----------|---------------------|----------|
| Microcontroller | Node MCU ESP8266 | 1 |
| Microcontroller | Arduino Uno ATmega328P | 1 |
| Color Sensor | TCS3200 (2.7-5.5V DC) | 1 |
| Servo Motor | MG995 (5V, Metal Gear, High Torque) | 2 |
| Servo Motor | 9G (5V, Plastic Gear) | 1 |
| Relay Module | 4-Channel (5V DC) | 1 |
| Relay Module | 2-Channel (5V DC) | 1 |
| Bluetooth Module | HC-05 (3.3-5V DC) | 1 |
| PCB | General Purpose (4×6 inch) | 2 |
| Gripper | Acrylic Material | 1 |
| SMPS | 12V, 5V, 3.3V DC (15A) | 1 |

---

## 🔌 Pin Configuration

### Node MCU with TCS3200
| TCS3200 Pin | Node MCU Pin |
|-------------|--------------|
| S0 | D3 |
| S1 | D4 |
| S2 | D5 |
| S3 | D6 |
| OUT | D7 |
| VCC | 3.3V |
| GND | GND |

### Node MCU with Servo Motors
| Servo | Node MCU Pin |
|-------|--------------|
| Servo 1 (MG995) | D15 |
| Servo 2 (MG995) | D5 |

### Node MCU with Relays
| Relay | Node MCU Pin |
|-------|--------------|
| Relay 1 | D10 |
| Relay 2 | D2 |
| Relay 3 | D0 |

---

## 📊 ThingSpeak Channel Setup

1. Create a ThingSpeak account at [thingspeak.com](https://thingspeak.com)
2. Create a new channel with the following fields:
   - **Field 1**: Red Color Data
   - **Field 2**: Blue Color Data
   - **Field 3**: Green Color Data
3. Configure the dashboard with widgets for real-time monitoring

**Channel ID**: `1707830`  
**Write API Key**: `PTOS9YM3CK1UR95U`

---

## 📱 MIT App Inventor

The mobile app provides manual control for:
- Mode selection (Manual/Auto)
- Conveyor start/stop
- Color sorting control
- Real-time status monitoring

---

## 💻 Firmware Description

### Node MCU Color Sensor Program
- Interfaces TCS3200 color sensor
- Reads RGB intensity values
- Detects Red, Green, and Blue objects
- Controls relays based on color detection
- Sends data to ThingSpeak cloud

### Arduino Bluetooth Control Program
- Interfaces HC-05 Bluetooth module
- Receives commands from MIT App Inventor
- Controls relays for gripper operation
- Provides pulse signals for servo motors

---

## 📸 Screenshots

### ThingSpeak Dashboard
![ThingSpeak Dashboard](docs/images/dashboard_screenshot.png)

### Circuit Diagram
![Circuit Diagram](docs/circuit_diagrams/circuit_diagram_1.png)

---

## 🚧 Installation & Setup

### Prerequisites
- Arduino IDE with ESP8266 board support
- WPL Soft for PLC programming
- MIT App Inventor account

### Steps
1. Clone this repository
2. Install required libraries in Arduino IDE
3. Upload `nodemcu_color_sensor.ino` to Node MCU
4. Upload `arduino_bluetooth_control.ino` to Arduino Uno
5. Connect components as per pin configuration
6. Set up ThingSpeak channel
7. Import MIT App Inventor project

---

## 🎯 Applications

- **Storing**: Program robot to store parts from production line
- **Sorting**: Sort different objects into separate piles
- **Packaging**: Pick objects and place them into containers
- **Quality Control**: Inspect and sort defective products
- **Palletizing**: Arrange products onto pallets

---

## 📚 References

1. [PLC Logic Functions](https://instrumentationtools.com/PLC-logic-functions/)
2. [WPL Soft Software](https://wplsoft.software.informer.com/2.3/)
3. [MIT App Inventor](https://appinventor.mit.edu/)
4. [Component Search Engine](https://componentsearchengine.com/)
5. [YouTube Tutorial](https://www.youtube.com/watch?v=o7VVmtX7SKs)

---

## 👥 Team Members

- **PLC & IoT**: [Your Name]
- **Microcontroller**: [Your Name]
- **Mechanical Design**: [Team Member]
- **Panel Work**: [Team Member]

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

---

## 📧 Contact

For any queries, please contact: [ankitbaswal03@gmail.com.com]
