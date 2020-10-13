// Hier beginnt das Setup
void setup() {
  pinMode(7, OUTPUT);  // Pin 7 ist ein Ausgang.
  pinMode(8,OUTPUT);   // Pin 8 ist ein Ausgang.
}

// Hier beginnt das Hauptprogramm
void loop() {
  digitalWrite(7, HIGH);  // Schalte die LED an Pin7 an.
  delay(1000);  // Warte 1000 Millisekunden.
  digitalWrite(7, LOW);  // Schalte die LED an Pin7 aus.
  digitalWrite(8, HIGH);  // Schalte die LED an Pin8 ein.
  delay(1000);  // Warte 1000 Millisekunden.
  digitalWrite(8, LOW);  // Schalte die LED an Pin8 aus.
}

// Hier am Ende springt das Programm an den Start des Loop-Teils. Also ...
// ... schalte die LED an Pin7 an.
// ... usw ... usw ... usw ...
