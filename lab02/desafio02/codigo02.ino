const int buttonPin = 12;
const int ledPin = 3;

int lastButtonState = HIGH;
int buttonState;
int ledState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonRead = digitalRead(buttonPin);

  if (buttonRead != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {

    if (buttonRead != buttonState) {
      Serial.print("buttonPin is ");
      Serial.print(buttonState);
      Serial.print(" - ");
      Serial.print("ledPin is ");
      Serial.println(ledState);
      
      buttonState = buttonRead;

      if (buttonState == LOW) {
        ledState = !ledState;
        digitalWrite(ledPin, ledState);

      }
    }
  }

  lastButtonState = buttonRead;
}