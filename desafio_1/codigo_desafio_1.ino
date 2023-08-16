int led_1 = 12;
int led_2 = 9;

void setup(){
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT); 
}

void loop(){
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  delay(500);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  delay(500);
  
}