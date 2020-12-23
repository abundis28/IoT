///////////////////////////////
//  Definitions

const int led_Pin = 8;
const int motion_Pin = 7;
int pirState = LOW;
int value = 0;

///////////////////////////////
//  Code

void setup() {
  pinMode(led_Pin, OUTPUT);
  pinMode(motion_Pin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  value = digitalRead(motion_Pin);
  if (value == HIGH) {
    digitalWrite(led_Pin, HIGH);
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(led_Pin, LOW);
    if (pirState == HIGH) {
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}
