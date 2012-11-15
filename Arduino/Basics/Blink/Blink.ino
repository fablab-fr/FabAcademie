/*
  Blink
  Allume une LED pendant une seconde, puis eteint la LED pendant une seconde, à l'infinie.
 
  Cet exemple est dans le Domaine public
  Traduction de l'exemple Blink de Arduino
 */
 
// Sue la majorité des cartes Arduino une LED est connectée sur le connecteur 13
// donnez lui un nom:
int led = 13;

// Procédure d'initialisation :  est exécutée une seule fois lorsque de l'appuie sur le bouton "reset":
void setup() {                
  // initialise le connecteur numérique en sorite.
  pinMode(led, OUTPUT);     
}

// Boucle principale infine :
void loop() {
  digitalWrite(led, HIGH);   // Allume la LED (HIGH indique un voltage elevé)
  delay(1000);               // attendre une seconde
  digitalWrite(led, LOW);    // Etteindre la LED (LOW indique un voltage Bas)
  delay(1000);               // attendre une seconde
}
