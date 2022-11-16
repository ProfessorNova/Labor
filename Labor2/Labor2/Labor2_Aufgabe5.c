#include <stdio.h>
int main()
{
    //Variablen
    //Variablen für Eingabe
    char geschlecht;
    float gewicht;
    float milliliter;
    float alkoholanteil;

    //Variablen zur Umrechnung
    float verteilungsfaktor;
    const float alkohol_dichte = 0.8;
    float alkohol_masse;

    //Variablen für Ausgabe
    float promille;

    //Eingabe
    scanf("%c %f %f %f", &geschlecht, &gewicht, &milliliter, &alkoholanteil);

    //legt Verteilungsfaktor fest
    switch (geschlecht)
    {
    case 'm':
        verteilungsfaktor = 0.7;
        break;

    case 'w':
        verteilungsfaktor = 0.6;
        break;

    case 'k':
        verteilungsfaktor = 0.8;
        break;

    default:
        break;
    }

    //berechnet die aufgenommene Masse des Alkohols
    alkohol_masse = milliliter * (alkoholanteil/100) * alkohol_dichte;

    //berechnet die Blutalkoholkonzentration
    promille = alkohol_masse/(gewicht*verteilungsfaktor);

    //Ausgabe
    printf("%.2f Promille", promille);

    return 0;
}
