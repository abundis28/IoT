///////////////////////////////
//  Constant definition

const int led_Pin = 8;

///////////////////////////////
//  Code

void setup() {
  // put your setup code here, to run once:
  pinMode(led_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_Pin, HIGH);  // Turn led on
  delay(500);             // Wait for half second  
  digitalWrite(led_Pin, LOW);   // Turn led off
  delay(500);             // Wait for half second
}
