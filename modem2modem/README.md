### Étapes de montage :
1. **Configurer l'alimentation :**
   - Connectez la borne positive (+) de l'alimentation DC 48V à la broche **Tip** des deux modems.
   - Insérez une résistance de **600 Ω** entre la borne négative (-) de l'alimentation et la broche **Ring** des modems.

2. **Relier les modems :**
   - Branchez les câbles RJ11 entre les modems et le médium de test.
   - Vérifiez que les connexions sont bien établies (TX ↔ RX, GND ↔ GND).

3. **Tester la tension :**
   - Utilisez un multimètre pour confirmer que les broches **Tip** et **Ring** reçoivent bien 48V DC.

---

## ⚙️ Configurer les Modems

### Commandes AT pour tester
1. **Modem A (appelant) :**
   - Envoyez la commande suivante depuis un terminal ou un logiciel :
     ```
     ATDT
     ```
   - Cela initialise un appel.

2. **Modem B (récepteur) :**
   - Configurez le deuxième modem pour répondre automatiquement ou envoyez la commande :
     ```
     ATA
     ```

### Vérification de la connexion
- Une fois connectés, les modems devraient émettre un son de handshake et établir une liaison.
- Vous pouvez ensuite tester le transfert de données en envoyant un texte ou un fichier.

---

## 🧑‍🔧 Dépannage

1. **Pas de réponse des modems :**
   - Vérifiez les connexions entre les broches **Tip** et **Ring**.
   - Assurez-vous que l'alimentation fournit bien 48V DC.

2. **Handshake échoue :**
   - Ajustez la valeur de la résistance pour atteindre l'impédance optimale (~600 Ω).
   - Vérifiez que les baudrates des deux modems correspondent.

3. **Problèmes de données :**
   - Vérifiez que les modems utilisent les mêmes paramètres (parité, bits d'arrêt, etc.).

---

## 🚀 Améliorations potentielles

1. **Ajout d'une simulation de sonnerie :**
   - Implémenter un oscillateur pour générer une sonnerie (~20 Hz, 90V AC).

2. **Évolutions vers un test multi-modems :**
   - Permettre à plusieurs modems de partager le même médium de test.

3. **Intégration avec le projet CellModem :**
   - Documenter les étapes pour utiliser cette interface avec les scripts Arduino et Android.

---

## 📜 Licence

Ce document est sous licence [MIT](../LICENSE). Vous êtes libre de l'utiliser, de le modifier et de le partager.

---

## 💬 Contributions

Les contributions sont les bienvenues ! N’hésitez pas à soumettre vos idées, correctifs ou améliorations via une "Issue" ou une "Pull Request".
