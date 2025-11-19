#define pushButton 2  
#define ledpin 8     

void setup(){
  pinMode(pushButton, INPUT);  
  pinMode(ledpin, OUTPUT);            
}


void loop() {
  int buttonState = digitalRead(pushButton);  

  digitalWrite(ledpin, buttonState);
}
