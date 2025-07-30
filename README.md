# AP1-Praktikum-Aufgabe-Notenspiegel
Aufgabenstellung: Erstellung eines Notenspiegels in C

Ziel:
Schreiben Sie ein C-Programm, das einen Notenspiegel für eine Klassenarbeit auswertet.

Beschreibung:
Das Programm soll für die Noten 1 bis 5 jeweils die Anzahl der vergebenen Arbeiten vom Benutzer abfragen und anschließend folgende Auswertungen vornehmen:

1. Die Gesamtanzahl aller Arbeiten berechnen.
2. Die gewichtete Notensumme berechnen (z. B. 3×1 + 5×2 + ...).
3. Die Durchschnittsnote berechnen.
4. Die Durchfallquote in Prozent berechnen (Anteil der Note 5).

Vorgaben:
- Verwenden Sie ein Array der Größe 5, um die Anzahl jeder Note zu speichern:
  int noten[5];

- Berechnen Sie:
  - studentensumme = Summe aller eingegebenen Anzahlen
  - notensumme = Summe aller (anzahl * note)
  - durchschnittsnote = notensumme / studentensumme
  - durchfallquote = (anzahl Note 5 / studentensumme) * 100

Ausgabeformat:
Das Programm soll eine übersichtliche Tabelle mit den Noten und deren Häufigkeiten ausgeben. Danach sollen die Durchschnittsnote und die Durchfallquote angezeigt werden.

Beispielausgabe:

------------------------------------------------------------------------
| Note   |   1     |   2     |   3     |   4     |   5    |   Gesamt   |
------------------------------------------------------------------------
| Anzahl |    3    |    5    |    4    |    2    |    1    |    15      |
------------------------------------------------------------------------

Durchschnittsnote: 2.47
Durchfallquote   : 6.67 %

Hinweise:
- Verwenden Sie Schleifen für die Eingabe und Berechnung.
- Achten Sie bei Berechnungen auf den richtigen Datentyp (int vs. float).
- Initialisieren Sie alle Zählvariablen vor der Verwendung.
