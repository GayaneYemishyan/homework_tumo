int pin = 32;

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  Serial.print("start again");
  int value = analogRead(12);
  analogWrite(pin, value);
  Serial.println("Done");
  
}
