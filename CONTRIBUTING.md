# Guide de Contribution - CellModem

Merci de votre intérêt pour **CellModem** ! Ce projet vise à reconnecter les technologies modernes avec les systèmes rétro tout en explorant de nouvelles façons d'utiliser des modems RS-232 et des appareils classiques.

---

## 🌟 Comment contribuer ?

1. **Forkez le dépôt** :
   - Cliquez sur le bouton **Fork** en haut à droite de cette page pour copier ce dépôt dans votre compte GitHub.

2. **Clonez votre fork** :
   - Clonez le dépôt sur votre machine locale avec :
     ```bash
     git clone https://github.com/<votre-utilisateur>/CellModem.git
     ```

3. **Créez une branche pour vos modifications** :
   - Travaillez sur une nouvelle branche pour chaque fonctionnalité ou correctif :
     ```bash
     git checkout -b feature/nouvelle-fonction
     ```

4. **Faites vos modifications** :
   - Ajoutez ou améliorez les fichiers existants.
   - Assurez-vous que vos modifications respectent la structure du projet.

5. **Soumettez vos changements** :
   - Committez vos modifications avec un message clair :
     ```bash
     git commit -m "Ajout : Fonction client RS-232 pour Commodore"
     ```
   - Poussez vos changements :
     ```bash
     git push origin feature/nouvelle-fonction
     ```

6. **Créez une Pull Request** :
   - Rendez-vous sur la page GitHub de votre fork.
   - Cliquez sur **"Pull Request"** et soumettez vos modifications pour examen.

---

## 📂 Contribuer à des parties spécifiques

### Scripts Arduino
- Ajoutez ou améliorez des scripts dans le répertoire **`arduino/`**.
- Documentez vos modifications dans le fichier **`arduino/README.md`**.

### Médium de test Modem
- Participez à la documentation ou au développement dans **`modem2modem/`**.
- Ajoutez des schémas, guides ou configurations.

### Systèmes rétro
- Proposez des scripts ou des ressources dans **`OldstyleComputer/`**, pour des systèmes comme Commodore, Atari, ou Commander X16.

---
---

## 🚨 Besoin urgent : Interface cellulaire

Nous avons besoin de contributions pour démarrer l’interface cellulaire du projet **CellModem**. Cette interface permettra à des téléphones modernes d’interagir avec des modems et des systèmes rétro. Voici les priorités :

### 📋 Priorités de l’interface cellulaire :
1. **Développer une application Android de base** :
   - Envoyer des commandes AT via un signal audio modulé.
   - Recevoir les réponses d’un modem en décodant les signaux audio.

2. **Implémenter un flux de communication simple :**
   - Champ texte pour envoyer des commandes AT.
   - Zone d’affichage des réponses.

3. **Concevoir une UI minimaliste mais fonctionnelle :**
   - Ajouter des paramètres pour configurer les baudrates, bits de données, etc.

---

Si vous êtes intéressé(e) à contribuer à cette partie, ouvrez une "Issue" ou proposez directement un prototype en "Pull Request". Toute aide est la bienvenue pour donner vie à cette fonctionnalité clé !

## 🔧 Exemples d'améliorations possibles

1. Ajouter des scripts pour des systèmes rétro non encore documentés.
2. Développer des outils ou scripts pour faciliter les connexions modem à modem.
3. Documenter des configurations avancées pour les BBS ou protocoles téléphoniques.

---

## ✅ Règles pour les contributions

- **Clarté du code :**
  - Fournissez des commentaires dans vos scripts pour expliquer leur fonctionnement.
  
- **Respect de la structure :**
  - Ajoutez vos fichiers dans les bons répertoires (ex. : Commodore dans `OldstyleComputer/commodore`).

- **Respect de la communauté :**
  - Soyez bienveillant(e) dans vos interactions et ouvert(e) aux suggestions.

---

## 📧 Questions ?

Si vous avez des questions ou des suggestions, ouvrez une "Issue" dans le dépôt. Nous serons ravis de vous aider !

---

Merci de contribuer à **CellModem** et d’aider à redonner vie aux technologies rétro ! 🚀
