int value = 0;
void setup() {
  Serial.begin(9600);
}


void loop() {
  value = analogRead(A0);  
  Serial.print("Sensor Value: ");
  Serial.println(value);
  delay(100);
}
