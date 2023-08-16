int buzzer = 13;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  String word = "Fernando"; // Digite o seu nome aqui
  
  
  word.toUpperCase();
  int wordLength = word.length();
   for (int i = 0; i < wordLength; i++) {
    char letter = word[i];
     if (letter == 'A') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'B') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'C') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'D') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'E') {
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'F') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'G') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'H') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'I') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'J') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'K') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'L') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'M') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'N') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'O') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'P') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'Q') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'R') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'S') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
     if (letter == 'T') {
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'U') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'V') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'W') {
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'X') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'Y') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
     }
     if (letter == 'Z') {
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 300);
       delay(400);
       tone(buzzer, 1000, 100);
       delay(200);
       tone(buzzer, 1000, 100);
       delay(200);
     }
    delay(250);
  }
  delay(1000);
}