///////////////////////////////
//  Definitions

const int led_Pin = 8;
const int audio_Pin = 5;

///////////////////////////////
//  Code

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_Pin, OUTPUT);
  pinMode(audio_Pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool sensorValue = digitalRead(audio_Pin);
  digitalWrite(led_Pin, sensorValue);
  if(sensorValue){
    delay(300); 
  }
}
