///////////////////////////////
//  Definitions

const int temp_Pin = 0;
float tempC;
int reading;

///////////////////////////////
//  Code

void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(temp_Pin);
  tempC = reading / 9.31;
  Serial.println(tempC);
  delay(500);
}
