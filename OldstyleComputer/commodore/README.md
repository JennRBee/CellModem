
# Commodore (C64, Amiga)

Ce dossier contient des exemples de code pour activer un client et un serveur RS-232 sur les systÃ¨mes Commodore.

---

## ðŸ“‚ Client RS-232

### Code BASIC pour le Commodore 64
Ce code envoie une commande AT pour composer un numÃ©ro via le modem.

```basic
10 OPEN 2,2,2,"RS232" : REM OUVRE LE PORT RS-232
20 PRINT#2,"ATDT5551234" : REM COMPOSE LE NUMÃ‰RO
30 INPUT#2,A$ : REM LIT LA RÃ‰PONSE DU MODEM
40 PRINT A$ : REM AFFICHE LA RÃ‰PONSE
50 IF A$ <> "" THEN CLOSE 2 : REM FERMETURE DU PORT
```

---

## ðŸ“‚ Serveur RS-232

### Code BASIC pour le Commodore 64
Ce code reÃ§oit des donnÃ©es via le port RS-232 et les renvoie en Ã©cho.

```basic
10 OPEN 2,2,2,"RS232" : REM OUVRE LE PORT RS-232
20 INPUT#2,A$ : REM LIT LES DONNÃ‰ES REÃ‡UES
30 PRINT A$ : REM AFFICHE LES DONNÃ‰ES
40 PRINT#2,A$ : REM RENVOIE LES DONNÃ‰ES (Ã‰CHO)
50 GOTO 20 : REM CONTINUE Ã€ LIRE
```

---

## ðŸ’¬ Contributions
Si vous avez des amÃ©liorations ou des scripts pour d'autres langues ou systÃ¨mes Commodore, n'hÃ©sitez pas Ã  les partager !
