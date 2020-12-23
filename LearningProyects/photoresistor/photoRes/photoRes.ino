///////////////////////////////
//  Definitions

const int input_Pin = 0;
int LDR;

///////////////////////////////
//  Code
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  LDR = analogRead(input_Pin);
  Serial.println(LDR);
  delay(300);
}
