# Configuration matérielle : Interface RS-232 avec Arduino/ESP32

Ce document explique comment configurer un module Arduino ou ESP32 pour communiquer avec un port RS-232 en utilisant un adaptateur TTL ↔ RS-232.

---

## 📋 Matériel requis

### 1. **Matériel principal :**
- **Arduino ou ESP32** : Tout modèle compatible avec l'Arduino IDE.
- **Adaptateur TTL ↔ RS-232** :
  - Utilise un convertisseur tel que **MAX3232** ou **MAX232**, conçu pour convertir les niveaux de tension TTL (5V/3.3V) en niveaux RS-232 (+12V/-12V).
- **Modem analogique** avec port RS-232 ou tout autre appareil compatible.
- **Câbles nécessaires** :
  - Câbles jumper pour relier l'Arduino à l'adaptateur TTL.
  - Un câble DB9 si nécessaire pour connecter le modem.

### 2. **Schéma de connexion :**
Voici comment connecter l'Arduino à l'adaptateur TTL ↔ RS-232 et au modem.

| Composant          | Arduino (ESP32) | Adaptateur TTL ↔ RS-232 | Modem RS-232 |
|---------------------|-----------------|-------------------------|--------------|
| **TX (émission)**   | Broche 3        | RX                     | TX (Pin 3)   |
| **RX (réception)**  | Broche 2        | TX                     | RX (Pin 2)   |
| **GND**             | GND             | GND                    | GND (Pin 5)  |

---

## 🛠 Étapes de configuration

### Étape 1 : Connexion matérielle
1. **Reliez l'Arduino ou l'ESP32 à l'adaptateur TTL ↔ RS-232** :
   - Connectez la broche TX de l'Arduino à RX de l'adaptateur TTL.
   - Connectez la broche RX de l'Arduino à TX de l'adaptateur TTL.
   - Connectez le GND de l'Arduino à celui de l'adaptateur TTL.

2. **Reliez l'adaptateur TTL ↔ RS-232 au modem :**
   - Utilisez un câble DB9 si nécessaire.
   - Vérifiez que les broches TX, RX, et GND du modem sont correctement connectées.

---

### Étape 2 : Configurer le script Arduino
1. **Initialisez `SoftwareSerial` ou `HardwareSerial` :**
   - Si vous utilisez un Arduino Uno ou Nano, utilisez la bibliothèque `SoftwareSerial` pour libérer le port série natif.
   - Sur un ESP32 ou Arduino Mega, utilisez directement un port série matériel (`Serial1`, `Serial2`, etc.).

2. **Testez la communication avec des commandes AT :**
   - Chargez le script `client.ino` ou `server.ino` fourni dans le répertoire.
   - Utilisez le moniteur série de l'IDE Arduino pour envoyer des commandes et voir les réponses.

---

### Étape 3 : Test et dépannage
#### Vérifiez les points suivants si la communication échoue :
- **Câblage correct :**
  - Assurez-vous que TX est connecté à RX et vice versa.
  - Vérifiez que GND est partagé entre tous les composants.
- **Baudrate :**
  - Assurez-vous que le baudrate (9600 par défaut) est le même pour tous les appareils.
- **Compatibilité de l'adaptateur :**
  - Utilisez un adaptateur TTL ↔ RS-232 compatible avec les niveaux de tension de l'Arduino ou de l'ESP32.

---

## 🔧 Notes techniques

### 1. **Niveaux de tension RS-232 vs TTL**
- Les appareils RS-232 utilisent des niveaux de tension compris entre **-12V et +12V**, incompatibles avec les signaux TTL standards (0V à 5V ou 0V à 3.3V).
- Le convertisseur TTL ↔ RS-232 (comme MAX3232) adapte ces niveaux pour permettre la communication entre les appareils.

### 2. **Broches importantes sur un port RS-232 (DB9)**
| Broche | Nom                     | Fonction                     |
|--------|--------------------------|------------------------------|
| 2      | RX (Receive Data)       | Données reçues par le modem  |
| 3      | TX (Transmit Data)      | Données envoyées par le modem|
| 5      | GND (Ground)            | Masse commune                |

### 3. **Protocole série**
- Par défaut, le script utilise les paramètres suivants :
  - **Baudrate** : 9600
  - **Bits de données** : 8
  - **Parité** : Aucune
  - **Bits d'arrêt** : 1

---

## 🚀 Améliorations à venir

1. **Support pour plusieurs baudrates** :
   - Ajouter une option pour ajuster dynamiquement la vitesse de communication.
2. **Interface utilisateur basique :**
   - Développer un outil pour faciliter l'envoi/réception de données directement depuis le moniteur série ou une application.
3. **Interopérabilité avec les BBS :**
   - Implémenter des scripts avancés pour dialoguer avec un BBS via RS-232.

---

## 📜 Licence

Ce document est sous licence [MIT](../LICENSE). Vous êtes libre de l’utiliser et de le modifier avec attribution.

---

## 💬 Contributions

Vos contributions sont les bienvenues ! Si vous avez des suggestions ou des améliorations, n’hésitez pas à soumettre une "Issue" ou une "Pull Request".
