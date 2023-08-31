const int ledPin = 3;
const int analogPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(analogPin);

  int delayTime = map(analogValue, 0, 1023, 1000, 100);

  digitalWrite(ledPin, HIGH);
  delay(delayTime);

  digitalWrite(ledPin, LOW);
  delay(delayTime);

  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print("  Delay Time: ");
  Serial.println(delayTime);
}