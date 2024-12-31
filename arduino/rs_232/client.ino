#include <SoftwareSerial.h>

// Configuration des broches pour le module RS-232
#define RX_PIN 2 // Réception
#define TX_PIN 3 // Transmission

// Initialisation de SoftwareSerial pour le RS-232
SoftwareSerial rs232Serial(RX_PIN, TX_PIN);

void setup() {
  // Démarrer les communications série
  Serial.begin(9600);         // Moniteur série
  rs232Serial.begin(9600);    // RS-232

  Serial.println("Initialisation du modem...");
  
  // Tester la communication avec le modem
  sendCommand("AT");
}

void loop() {
  // Lire les réponses du modem
  if (rs232Serial.available()) {
    String response = rs232Serial.readString();
    Serial.print("Modem: ");
    Serial.println(response);
  }

  // Exemple : Envoyer une commande si un mot est tapé dans le moniteur série
  if (Serial.available()) {
    String command = Serial.readString();
    sendCommand(command);
  }
}

// Fonction pour envoyer une commande AT au modem
void sendCommand(String command) {
  Serial.print("Envoi: ");
  Serial.println(command);
  rs232Serial.println(command); // Envoyer au modem
}
