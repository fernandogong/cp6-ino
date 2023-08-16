int led_1 = 12;
int led_2 = 9;
boolean ledState = LOW;


void setup(){
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT); 
}

void loop(){
  ledState = !ledState;
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, ledState);
  delay(500);
  digitalWrite(led_1, LOW);
  delay(500);
}