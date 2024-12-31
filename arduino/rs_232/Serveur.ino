#include <SoftwareSerial.h>

// Configuration des broches pour le module RS-232
#define RX_PIN 2 // Réception
#define TX_PIN 3 // Transmission

// Initialisation de SoftwareSerial pour le RS-232
SoftwareSerial rs232Serial(RX_PIN, TX_PIN);

void setup() {
  // Initialisation des communications série
  Serial.begin(9600);         // Moniteur série pour debug
  rs232Serial.begin(9600);    // Communication RS-232

  Serial.println("Serveur RS-232 prêt.");
}

void loop() {
  // Vérifie si des données arrivent depuis le RS-232
  if (rs232Serial.available()) {
    String receivedData = rs232Serial.readString(); // Lire les données reçues
    Serial.print("Reçu : "); // Afficher sur le moniteur série pour debug
    Serial.println(receivedData);

    // Renvoie les données telles quelles (écho)
    rs232Serial.print(receivedData);
    Serial.println("Données renvoyées.");
  }
}
