#define led10 10
#define led9  9
#define led8  8

void setup() {
  pinMode(led10, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {
  digitalWrite(led10, HIGH);
  delay(4000);
  digitalWrite(led9, HIGH);
  delay(1000);
  digitalWrite(led10, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led8, HIGH);
  delay(4000);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(1000);
  digitalWrite(led9, LOW);
}