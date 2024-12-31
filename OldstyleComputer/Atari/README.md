
# Atari (ST, 2600)

Ce dossier contient des exemples de code pour activer un client et un serveur RS-232 sur les systÃ¨mes Atari.

---

## ðŸ“‚ Client RS-232

### Code GFA BASIC pour Atari ST
Ce code envoie une commande AT pour composer un numÃ©ro via le modem.

```gfa
PROCEDURE ConnectToModem
  OPEN "COM1:9600,N,8,1" FOR OUTPUT AS #1
  PRINT #1, "ATDT5551234" ! ENVOIE LA COMMANDE AT
  WHILE EOF(#1) = 0
    INPUT #1, Answer$
    PRINT Answer$
  WEND
  CLOSE #1
ENDPROC
```

---

## ðŸ“‚ Serveur RS-232

### Code GFA BASIC pour Atari ST
Ce code reÃ§oit des donnÃ©es via le port RS-232 et les renvoie en Ã©cho.

```gfa
PROCEDURE StartServer
  OPEN "COM1:9600,N,8,1" FOR INPUT OUTPUT AS #1
  WHILE TRUE
    INPUT #1, Data$
    PRINT "ReÃ§u : "; Data$
    PRINT #1, Data$ ! RENVOIE LES DONNÃ‰ES
  WEND
  CLOSE #1
ENDPROC
```

---

## ðŸ’¬ Contributions
Vous pouvez ajouter des scripts ou amÃ©liorer ceux existants pour l'Atari !
