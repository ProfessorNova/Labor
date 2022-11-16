#include <stdio.h>
int main()
{
    //Variabeln
    float gewicht;
    float groesse;
    float BMI;

    //ließt Gewicht und Größe ein
    scanf("%f %f", &gewicht, &groesse);

    //rechnet Gewicht und Größe in benötigte Einheiten um
    gewicht = gewicht/1000;
    groesse = groesse/100;

    //berechnet BMI
    BMI = gewicht/(groesse*groesse);

    //Ausgabe
    printf ("Der BMI liegt bei: %.2f!", BMI);

    return 0;
}
