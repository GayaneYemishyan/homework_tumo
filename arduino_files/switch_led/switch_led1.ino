#define pushButton 2  
#define ledpin 8     

int state = LOW; 
int last_state = LOW;
void setup(){
  pinMode(pushButton, INPUT);  
  pinMode(ledpin, OUTPUT);            
}


void loop() {
  int buttonState = digitalRead(pushButton);  

  
  if (buttonState == HIGH && last_state == LOW) {
    state = !state;                       
    digitalWrite(ledpin, state);                            
  }
  last_state = buttonState;
}

