void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);  // Turn led on
  delay(500);             // Wait for half second  
  digitalWrite(8, LOW);   // Turn led off
  delay(500);             // Wait for half second
}
