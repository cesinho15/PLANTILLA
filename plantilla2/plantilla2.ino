

// amb el void setup executa un cop la funcio asignada
void setup() {
  // cridem el pin 13 com una sortida Out
  pinMode(13, OUTPUT);
}

// la funció void loop un cop iniciat el programa s'executa repetitivament
void loop() {
  digitalWrite(13, HIGH);   // el led que connectarem en el pin 13 li diem que el voltatge que li arribi sigui el alt
  delay (1000);              // deley un temporitzador que fara esperar 1s
  digitalWrite(13, LOW);    // el led que connectarem en el pin 13 li diem que el voltatge que li arribi sigui el baix
  delay(1000);              // deley un temporitzador que fara esperar 1s
}
