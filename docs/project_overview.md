# ASPPSBC Project Overview

## 📋 Project Information

**Project Name**: Automated Sorting, Pick and Place System using Belt Conveyor (ASPPSBC)

**Academic Year**: 6th Semester

**Institution**: [Your Institution Name]

**Department**: Mechatronics Engineering

**Project Duration**: [Start Date] - [End Date]

---

## 🎯 Project Objective

The main objective of the ASPPSBC project is to design and develop an automated system that can:
1. **Detect** objects of different colors (Red, Green, Blue) moving on a conveyor belt
2. **Sort** unwanted objects using a pneumatic cylinder
3. **Pick and Place** objects using a robotic gripper at the end of the conveyor
4. **Control** the entire system using PLC and Microcontroller
5. **Monitor** real-time data through IoT cloud platform

---

## 🔧 System Components

### Mechanical Components
| Component | Specification | Purpose |
|-----------|---------------|---------|
| Conveyor Belt | Green PVC, 5mm thickness | Transport objects |
| Rollers | Metallic steel | Belt movement |
| Motor | DC Gear Motor 12V | Belt drive |
| Frame | Aluminum channel | Structure support |
| Stands | Hard plastic | Mounting components |
| Bearings | Stainless steel | Smooth rotation |

### Electrical Components
| Component | Specification | Purpose |
|-----------|---------------|---------|
| PLC | Delta DVP-14SS2 | Main controller |
| SMPS | 24V 2A, 12V 15A, 5V 30A | Power supply |
| MCB | DP | Circuit protection |
| Relay Card | 8 Channel | Output switching |
| Proximity Sensor | 24VDC PNP/NPN | Object detection |
| Push Buttons | Red & Green | Manual control |
| LED Indicators | Yellow, Green, Red | Status indication |

### Electronics & IoT Components
| Component | Specification | Purpose |
|-----------|---------------|---------|
| Node MCU | ESP8266 | IoT connectivity |
| Arduino Uno | ATmega328P | Bluetooth control |
| Color Sensor | TCS3200 | Color detection |
| Servo Motors | MG995, 9G | Gripper control |
| Bluetooth | HC-05 | Mobile communication |
| Relay Module | 4-Channel, 2-Channel | Output control |

### Pneumatic Components
| Component | Specification | Purpose |
|-----------|---------------|---------|
| Actuator | Double Acting 25×25, 40mm | Sorting operation |
| DCV Valve | 5/2 Double Solenoid | Actuator control |
| Compressor | - | Air supply |
| Pipes | Pneumatic tubing | Air transmission |

---

## 📊 Working Process

### Step-by-Step Operation
┌─────────────────────────────────────────────────────────────┐
│ SYSTEM FLOW CHART │
├─────────────────────────────────────────────────────────────┤
│ │
│ START ──► Power ON (MCB) ──► Mode Selection │
│ (Manual/Auto) │
│ │ │
│ ▼ │
│ ┌─────────────────────────────────────┐ │
│ │ MANUAL MODE │ │
│ │ - Press Green Push Button │ │
│ │ - Conveyor Starts │ │
│ │ - Place Color Object on Belt │ │
│ └─────────────────────────────────────┘ │
│ │ │
│ ▼ │
│ ┌─────────────────────────────────────┐ │
│ │ COLOR SENSOR DETECTION │ │
│ │ - TCS3200 Scans Color │ │
│ │ - Red/Green → Pass to Gripper │ │
│ │ - Blue → Activate Cylinder │ │
│ └─────────────────────────────────────┘ │
│ │ │
│ ▼ │
│ ┌─────────────────────────────────────┐ │
│ │ RED/GREEN OBJECT │ │
│ │ - Conveyor Moves to Gripper │ │
│ │ - Gripper Picks Object │ │
│ │ - Places at Specific Station │ │
│ └─────────────────────────────────────┘ │
│ │ │
│ ▼ │
│ ┌─────────────────────────────────────┐ │
│ │ BLUE OBJECT │ │
│ │ - Second Sensor Detects │ │
│ │ - Pneumatic Cylinder Activates │ │
│ │ - Sorts Blue Object │ │
│ └─────────────────────────────────────┘ │
│ │ │
│ ▼ │
│ STOP ──► Red Push Button ──► MCB OFF │
│ │
└─────────────────────────────────────────────────────────────┘

text

---

## 🎮 Control Modes

### 1. Manual Mode
- **Activation**: Toggle switch to Manual position
- **Control**: Green push button to start
- **Operation**: 
  - Place object on conveyor
  - System detects and processes
  - Manual intervention possible

### 2. Auto Mode
- **Activation**: Toggle switch to Auto position
- **Control**: Mobile app signals
- **Operation**:
  - Fully automated cycle
  - Continuous operation
  - Remote monitoring

---

## 🌐 IoT Integration

### Cloud Platform: ThingSpeak
- **Channel ID**: 1707830
- **Fields**: Red, Green, Blue color data
- **Visualization**: Real-time charts and numeric displays

### Data Flow
TCS3200 Sensor → Node MCU → WiFi → ThingSpeak → Dashboard

text

### Real-time Monitoring
- Color intensity values
- Object detection status
- System operational status
- Historical data analysis

---

## 📱 Mobile Application

### MIT App Inventor App
- **Purpose**: Manual control of the system
- **Features**:
  - Bluetooth connection (HC-05)
  - Start/Stop controls
  - Color selection
  - Status display

### App Functions
1. **Connect**: Pair with HC-05 Bluetooth
2. **Manual Control**: Send commands to Arduino
3. **Status Display**: View system status
4. **Emergency Stop**: Immediate system halt

---

## 🔌 Communication Protocols

### 1. PLC Communication
- **Protocol**: Serial (RS-232)
- **Software**: WPL Soft
- **Language**: Ladder Logic
- **Data**: Digital I/O signals

### 2. IoT Communication
- **Protocol**: WiFi (802.11 b/g/n)
- **Platform**: ThingSpeak
- **Data Format**: HTTP GET requests
- **Frequency**: Every 1 second

### 3. Bluetooth Communication
- **Protocol**: Bluetooth 2.0
- **Module**: HC-05
- **Baud Rate**: 9600 bps
- **Data**: ASCII commands

---

## 📊 System Specifications

### Conveyor System
| Parameter | Value |
|-----------|-------|
| Belt Type | Green PVC |
| Belt Thickness | 5mm |
| Belt Length | 4 meters |
| Motor Type | DC Gear Motor |
| Motor Voltage | 12V DC |
| Speed | Adjustable |

### Control System
| Parameter | Value |
|-----------|-------|
| PLC Model | Delta DVP-14SS2 |
| Inputs | 8 Digital |
| Outputs | 6 Digital |
| Programming | Ladder Logic |
| Memory | 8K Steps |

### Sensor System
| Parameter | Value |
|-----------|-------|
| Sensor Type | TCS3200 |
| Operating Voltage | 2.7-5.5V DC |
| Resolution | High |
| Output | Frequency |
| Detection Range | 0-10mm |

---

## 🏭 Industrial Applications

### 1. Manufacturing
- Production line sorting
- Quality control inspection
- Automated packaging

### 2. Warehousing
- Inventory management
- Automated storage
- Order fulfillment

### 3. Logistics
- Parcel sorting
- Package handling
- Distribution automation

### 4. Food Industry
- Produce sorting by color
- Quality grading
- Packaging automation

### 5. Recycling
- Material sorting
- Waste segregation
- Resource recovery

---

## 🎯 Benefits

### Automation Benefits
- **Efficiency**: High-speed operation
- **Accuracy**: Precise sorting and placement
- **Consistency**: Reliable performance
- **Cost Reduction**: Reduced labor costs

### Technical Benefits
- **Flexibility**: Multiple control modes
- **Scalability**: Easy to expand
- **Integration**: Works with existing systems
- **Monitoring**: Real-time data access

### Educational Benefits
- Hands-on experience
- Cross-discipline learning
- Industry-ready skills
- Problem-solving abilities

---

## 🔮 Future Scope

### Enhancements
1. **AI Integration**: Machine learning for object recognition
2. **Vision System**: Camera-based detection
3. **Multiple Grippers**: Simultaneous operation
4. **Advanced Sensors**: Additional parameters detection
5. **Industry 4.0**: Full IoT integration
6. **Edge Computing**: Local data processing
7. **Predictive Maintenance**: Failure prediction

### Upgrades
- Conveyor speed control
- Multiple color detection
- Additional sorting bins
- Wireless monitoring
- Voice control
- Gesture control

---

## 📈 Performance Metrics

### Operational Metrics
- **Throughput**: Objects per minute
- **Accuracy**: Sorting precision
- **Response Time**: Detection to action
- **Uptime**: System availability

### Target Values
- **Sorting Accuracy**: >95%
- **Pick & Place Success**: >90%
- **System Uptime**: >99%
- **Response Time**: <2 seconds

---

## 📝 Key Learnings

### Technical Skills
1. PLC programming and automation
2. Microcontroller programming
3. Sensor interfacing
4. IoT implementation
5. Mobile app development
6. Circuit design
7. Mechanical design

### Soft Skills
1. Team collaboration
2. Project management
3. Problem-solving
4. Documentation
5. Presentation skills

---

## 📚 References

### Software
1. WPL Soft - PLC Programming
2. SolidWorks 2018 - Mechanical Design
3. AutoCAD Electrical - Circuit Design
4. Arduino IDE - Microcontroller Programming
5. MIT App Inventor - Mobile App Development
6. ThingSpeak - IoT Platform

### Hardware
1. Delta PLC DVP-14SS2
2. TCS3200 Color Sensor
3. Node MCU ESP8266
4. Arduino Uno
5. HC-05 Bluetooth Module
6. MG995 Servo Motor

### Resources
1. Instrumentation Tools - PLC Tutorials
2. YouTube Tutorials
3. Component Search Engine
4. MIT App Inventor Documentation
5. ThingSpeak Documentation

---

## 👥 Team Contribution

| Module | Team Member | Responsibilities |
|--------|-------------|------------------|
| Module 1 | All Members | Project Planning & Design |
| Module 2 | Mechanical Team | Design, Fabrication, Assembly |
| Module 3 | PLC & Panel Team | PLC Programming, Panel Wiring |
| Module 4 | Electronics & IoT Team | Sensors, Microcontroller, IoT |

---

## ✅ Project Checklist

- [x] Project Ideation
- [x] Mechanical Design (SolidWorks)
- [x] Bill of Materials
- [x] Mechanical Fabrication
- [x] PLC Programming (WPL Soft)
- [x] Panel Design (AutoCAD)
- [x] Panel Wiring
- [x] Sensor Integration
- [x] Node MCU Programming
- [x] Arduino Programming
- [x] Bluetooth Integration
- [x] IoT Setup (ThingSpeak)
- [x] Mobile App Development
- [x] System Integration
- [x] Testing & Debugging
- [x] Documentation
- [x] Presentation

---

## 📞 Contact Information

**Project Guide**: Dr.Jagdeep Singh

**Team Leader**: Ankit

**Email**: ankitbaswal03@gmail.com

**GitHub**: https://github.com/ankitbaswal03/ASPPSBC-Color-Sorting-Pick-PlaceASPPSBC-Color-Sorting-Pick-Place/

**Date**: 15-June-2022

---

*This document provides a comprehensive overview of the ASPPSBC project, detailing its components, working process, applications, and technical specifications.*
