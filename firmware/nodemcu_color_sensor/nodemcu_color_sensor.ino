/*
 * Node MCU Color Sensor Program
 * TCS3200 Color Sensor with ThingSpeak Integration
 * 
 * Pin Configuration:
 * S0 -> D3, S1 -> D4, S2 -> D5, S3 -> D6, OUT -> D7
 * Relay 1 -> D10 (Red), Relay 2 -> D2 (Blue), Relay 3 -> D0 (Green)
 * Servo 1 -> D15, Servo 2 -> D5
 */

#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
#include <Servo.h>

// WiFi Credentials
const char* ssid = "realme 8";
const char* password = "12345678";

// ThingSpeak Configuration
WiFiClient client;
long mychannelNumber = 1707830;
const char myWriteAPIKey[] = "PTOS9YM3CK1UR95U";

// Servo Objects
Servo myservo;
Servo myservo1;

// Color Sensor Pins
const int s0 = D3;
const int s1 = D4;
const int s2 = D5;
const int s3 = D6;
const int out = D7;

// Relay Pins
const int relay1 = D10;  // Red
const int relay2 = D2;   // Blue
const int relay3 = D0;   // Green

// Color Variables
int red = 0;
int green = 0;
int blue = 0;
int redcolor = 0;
int greencolor = 0;
int bluecolor = 0;

// Flags
int flag = 0;
int flag1 = 0;
int flag2 = 0;

void setup() {
  Serial.begin(9600);
  delay(3000);
  
  // Initialize Pins
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(out, INPUT);
  
  // Attach Servos
  myservo.attach(15);
  myservo1.attach(5);
  
  // Set Initial States
  digitalWrite(s0, HIGH);
  digitalWrite(s1, HIGH);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  
  myservo.write(85);
  myservo1.write(160);
  
  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    Serial.print("..");
  }
  Serial.println();
  Serial.println("Node MCU is connected!!");
  Serial.println(WiFi.localIP());
  ThingSpeak.begin(client);
}

void loop() {
  // Read Color Sensor
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  
  digitalWrite(s2, HIGH);
  digitalWrite(s3, LOW);
  green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  
  // Print Intensity Values
  Serial.print("R Intensity: ");
  Serial.println(red, DEC);
  Serial.print("G Intensity: ");
  Serial.println(green, DEC);
  Serial.print("B Intensity: ");
  Serial.println(blue, DEC);
  delay(1000);
  
  // Send Data to ThingSpeak
  ThingSpeak.writeField(mychannelNumber, 1, redcolor, myWriteAPIKey);
  ThingSpeak.writeField(mychannelNumber, 2, bluecolor, myWriteAPIKey);
  ThingSpeak.writeField(mychannelNumber, 3, greencolor, myWriteAPIKey);
  
  // Red Color Detection
  if (red < 50 && flag == 0) {
    redcolor++;
    Serial.println(redcolor, DEC);
    digitalWrite(relay1, HIGH);
    delay(3000);
    digitalWrite(relay1, LOW);
    flag = 1;
    myservo.write(85);
    delay(1000);
    myservo1.write(160);
    delay(300);
  }
  
  // Blue Color Detection
  if (blue < 30 && flag1 == 0) {
    bluecolor++;
    Serial.println(bluecolor, DEC);
    digitalWrite(relay2, HIGH);
    flag1 = 1;
    delay(1000);
    digitalWrite(relay2, LOW);
  } else if (blue > 30 && flag1 == 1) {
    flag1 = 0;
  }
  
  // Green Color Detection
  if (green < 52 && red > 79 && flag2 == 0) {
    greencolor++;
    Serial.println(greencolor, DEC);
    digitalWrite(relay3, HIGH);
    delay(3000);
    digitalWrite(relay3, LOW);
    flag2 = 1;
    myservo.write(85);
    delay(1000);
    myservo1.write(160);
    delay(300);
    myservo1.write(105);
    delay(1000);
    myservo.write(0);
    delay(1000);
    myservo1.write(160);
    delay(1000);
    myservo.write(85);
    delay(1000);
    digitalWrite(relay3, LOW);
  } else if (green < 52 && red > 79 && blue < 46 && flag2 == 1) {
    flag2 = 0;
  }
}
