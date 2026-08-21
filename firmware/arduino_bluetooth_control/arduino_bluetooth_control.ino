/*
 * Arduino Bluetooth Control Program
 * Controls Gripper via HC-05 Bluetooth Module
 */

int relay1 = 13;  // Gripper 1
int relay2 = 12;  // Gripper 2
int data;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  Serial.begin(9600);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();
    
    // Command 1: Activate Gripper 1
    if (data == 1) {
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, HIGH);
      delay(1000);
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, LOW);
    }
    // Command 2: Activate Gripper 2
    else if (data == 2) {
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, LOW);
      delay(1000);
      digitalWrite(relay2, LOW);
      digitalWrite(relay1, LOW);
    }
  }
}
