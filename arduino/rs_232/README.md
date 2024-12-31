# Arduino RS-232 Interface

Ce répertoire contient des scripts Arduino pour interfacer un modem analogique via un port **RS-232** en utilisant un adaptateur **TTL ↔ RS-232**.

## 📋 Contenu

- **`client.ino`** : Un script pour envoyer des commandes AT au modem et afficher les réponses.
- **`server.ino`** : Un script minimaliste qui agit comme un serveur RS-232, renvoyant en écho les données reçues.

---

## 🛠 Matériel nécessaire

### 1. **Matériel principal :**
- **Arduino** (Uno, Mega, Nano, ou ESP32 compatible avec Arduino IDE).
- **Adaptateur TTL ↔ RS-232** (par exemple : MAX3232 ou équivalent).
- **Modem analogique** avec un port RS-232.
- **Câbles nécessaires :**
  - Câbles jumper pour relier l’Arduino et l’adaptateur TTL.
  - Câble DB9 si nécessaire pour connecter le modem.

### 2. **Schéma de connexion :**
| Composant          | Arduino   | Adaptateur TTL ↔ RS-232 |
|---------------------|-----------|-------------------------|
| **TX (émission)**   | Broche 3  | RX                     |
| **RX (réception)**  | Broche 2  | TX                     |
| **GND**            | GND       | GND                    |

---

## ⚙️ Fonctionnalités des scripts

### **1. `client.ino`**
- **Description** :
  - Envoie des commandes AT au modem via le port RS-232.
  - Affiche les réponses reçues sur le moniteur série de l'Arduino IDE.
- **Utilisation** :
  - Tapez des commandes AT dans le moniteur série (par exemple : `AT` ou `ATZ`) et observez la réponse (exemple : `OK`).

### **2. `server.ino`**
- **Description** :
  - Reçoit des données via le port RS-232 et les renvoie telles quelles (écho).
  - Sert de base pour implémenter des commandes ou une logique plus complexe.
- **Utilisation** :
  - Connectez un appareil capable d’envoyer des données via RS-232 (ordinateur, autre Arduino, etc.).
  - Les données reçues seront renvoyées en écho.

---

## 🧑‍🔧 Points techniques et améliorations à venir

### **Aspects techniques actuels :**
1. **Communication RS-232 :**
   - La vitesse de communication par défaut est de **9600 bauds**, mais cela peut être modifié.
   - Utilisation de la bibliothèque `SoftwareSerial` pour les broches RX/TX.

2. **Compatibilité matérielle :**
   - Compatible avec les modules Arduino ou ESP32.
   - L’utilisation de `HardwareSerial` pourrait être envisagée pour optimiser les performances sur certains appareils.

### **Prochaines fonctionnalités :**
1. **Client avancé :**
   - Gestion des erreurs de communication (timeout, etc.).
   - Ajout d’un système pour sauvegarder ou analyser les réponses du modem.

2. **Serveur évolué :**
   - Ajouter une logique conditionnelle pour interpréter des commandes spécifiques.
   - Implémenter une couche minimale pour dialoguer avec un BBS.

3. **RS-232 bidirectionnel :**
   - Tester la communication entre deux Arduinos ou entre un Arduino et un PC via RS-232.

4. **Compatibilité ESP32 :**
   - Exploiter les multiples UART natifs de l’ESP32 pour gérer la communication sans `SoftwareSerial`.

---

## 🚀 Comment commencer

1. **Charger un script :**
   - Ouvrez `client.ino` ou `server.ino` dans l'Arduino IDE.
   - Téléversez le script sur l'Arduino ou l’ESP32.

2. **Connecter le matériel :**
   - Assurez-vous que les broches RX/TX et GND sont correctement connectées entre l'Arduino et l’adaptateur TTL ↔ RS-232.
   - Reliez l’adaptateur au modem via un câble DB9.

3. **Test :**
   - Pour `client.ino` : Envoyez des commandes AT depuis le moniteur série.
   - Pour `server.ino` : Envoyez des données depuis un autre appareil connecté au RS-232.

---

## 📜 Licence

Le contenu de ce répertoire est sous licence [MIT](../LICENSE), permettant une utilisation libre avec attribution.

---

## 💬 Contributions

Les contributions sont les bienvenues ! Voici quelques idées pour commencer :
- Optimiser le code pour des protocoles plus rapides.
- Tester la compatibilité avec d'autres modems RS-232.
- Implémenter des fonctionnalités avancées comme le contrôle d’un BBS.

Pour toute question, ouvrez une "Issue" ou soumettez une "Pull Request".
