
# Commander X16

Ce dossier contient des exemples de code pour activer un client et un serveur RS-232 sur le Commander X16.

---

## ðŸ“‚ Client RS-232

### Code BASIC X16
Ce code envoie une commande AT pour composer un numÃ©ro via le modem.

```basic
10 PRINT "INITIALISATION DU MODEM"
20 OPEN 2,2,2,"COM1:9600,N,8,1" : REM CONFIGURATION DU PORT
30 PRINT#2,"ATDT5551234" : REM ENVOIE UNE COMMANDE AU MODEM
40 INPUT#2,A$ : REM LIT LA RÃ‰PONSE DU MODEM
50 PRINT A$ : REM AFFICHE LA RÃ‰PONSE
60 CLOSE 2 : REM FERMETURE DU PORT
```

---

## ðŸ“‚ Serveur RS-232

### Code BASIC X16
Ce code reÃ§oit des donnÃ©es via le port RS-232 et les renvoie en Ã©cho.

```basic
10 OPEN 2,2,2,"COM1:9600,N,8,1" : REM CONFIGURATION DU PORT
20 INPUT#2,A$ : REM LIT LES DONNÃ‰ES REÃ‡UES
30 PRINT A$ : REM AFFICHE LES DONNÃ‰ES
40 PRINT#2,A$ : REM RENVOIE LES DONNÃ‰ES (Ã‰CHO)
50 GOTO 20 : REM CONTINUE Ã€ LIRE
```

---

## ðŸ’¬ Contributions
Partagez vos scripts ou vos idÃ©es pour enrichir cette section dÃ©diÃ©e au Commander X16 !


Merci à @The8BitGuy pour son travail sur le Commander X16, une source d'inspiration !
