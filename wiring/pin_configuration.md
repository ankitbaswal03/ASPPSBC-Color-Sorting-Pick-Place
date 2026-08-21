# Complete Pin Configuration

## Node MCU Pin Map

| Pin | Function | Connected To |
|-----|----------|--------------|
| D0 | Relay 3 | Green Color Relay |
| D1 | Not Used | - |
| D2 | Relay 2 | Blue Color Relay |
| D3 | S0 | TCS3200 Frequency Scale |
| D4 | S1 | TCS3200 Frequency Scale |
| D5 | S2 | TCS3200 Photodiode Selection |
| D6 | S3 | TCS3200 Photodiode Selection |
| D7 | OUT | TCS3200 Output |
| D8 | Not Used | - |
| D9 | Not Used | - |
| D10 | Relay 1 | Red Color Relay |
| D11 | Not Used | - |
| D12 | Not Used | - |
| D13 | Not Used | - |
| D14 | Not Used | - |
| D15 | Servo 1 | MG995 (Gripper 1) |
| D16 | Servo 2 | MG995 (Gripper 2) |
| 3.3V | Power | TCS3200 VCC |
| GND | Ground | All components |
| VIN | Not Used | - |

## Arduino Uno Pin Map

| Pin | Function | Connected To |
|-----|----------|--------------|
| 0 (RX) | Bluetooth TX | HC-05 TX |
| 1 (TX) | Bluetooth RX | HC-05 RX |
| 2-11 | Not Used | - |
| 12 | Relay 2 | Gripper 2 Control |
| 13 | Relay 1 | Gripper 1 Control |
| 5V | Power | HC-05 VCC |
| GND | Ground | HC-05 GND |
| A0-A5 | Not Used | - |

## Power Supply Configuration

| SMPS Output | Voltage | Connected To |
|-------------|---------|--------------|
| Output 1 | 24V DC | PLC, Proximity Sensor |
| Output 2 | 12V DC (15A) | DC Motor, SMPS 5V/3.3V |
| Output 3 | 5V DC | Node MCU, Arduino Uno |
| Output 4 | 3.3V DC | TCS3200 Color Sensor |

## Relay Module Connections

### 4-Channel Relay
| Channel | Connected To | Function |
|---------|--------------|----------|
| CH1 | Node MCU D10 | Red Color Detection |
| CH2 | Node MCU D2 | Blue Color Detection |
| CH3 | Node MCU D0 | Green Color Detection |
| CH4 | Not Used | Spare |

### 2-Channel Relay
| Channel | Connected To | Function |
|---------|--------------|----------|
| CH1 | Arduino Pin 13 | Gripper 1 |
| CH2 | Arduino Pin 12 | Gripper 2 |

## Sensor Connections

### TCS3200 Color Sensor
| Pin | Connected To | Description |
|-----|--------------|-------------|
| S0 | Node MCU D3 | Output Frequency Scaling (100%) |
| S1 | Node MCU D4 | Output Frequency Scaling (100%) |
| S2 | Node MCU D5 | Photodiode Type Selection |
| S3 | Node MCU D6 | Photodiode Type Selection |
| OUT | Node MCU D7 | Output Frequency |
| VDD | Node MCU 3.3V | Power Supply |
| GND | Node MCU GND | Ground |
| OE | Not Connected | Output Enable (Active Low) |

## Motor Connections

### DC Gear Motor (Conveyor)
| Wire | Connected To | Description |
|------|--------------|-------------|
| Red | 12V DC SMPS | Power |
| Black | GND | Ground |
| Control | PLC Output | Speed Control |

## Pneumatic System

### 5/2 Double Solenoid DCV
| Port | Connected To | Description |
|------|--------------|-------------|
| P | Compressor | Pressure Supply |
| A | Cylinder Port 1 | Actuator Extend |
| B | Cylinder Port 2 | Actuator Retract |
| R | Exhaust | Exhaust Port |
| S | Exhaust | Exhaust Port |
| Coil 1 | PLC Output | Activate Extend |
| Coil 2 | PLC Output | Activate Retract |
