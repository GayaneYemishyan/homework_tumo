int pin = 10;
void setup()
{
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop()
{
  Serial.println("Start");
  for(int i = 0; i <= 255; i += 5){
  	analogWrite(pin, i);
    delay(30);
  }
  Serial.println("Done!");
}