const int buttonPin = 12;
const int ledPin = 3;

int lastButtonState = HIGH;
int buttonState;
int ledState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
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
      buttonState = buttonRead;

      if (buttonState == LOW) {
        ledState = !ledState;
        digitalWrite(ledPin, ledState);
      }
    }
  }

  lastButtonState = buttonRead;
}