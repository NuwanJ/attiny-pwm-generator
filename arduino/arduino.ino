
int pwmPin = 0;
int analogPin = A1;

void setup() {

  pinMode(pwmPin, OUTPUT);
  pinMode(analogPin, INPUT);
}

void loop() {
  
  int val = analogRead(analogPin); // Read analog voltage on pin 2 (A1)
  analogWrite(pwmPin, val / 4);
  
}
