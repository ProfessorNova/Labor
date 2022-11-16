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

    //Einordung von BMI und Ausgabe
    if(BMI < 18.4){
        printf("Untergewicht %.1f",BMI);
    }
    else if(BMI < 24.9){
        printf("Normalgewicht %.1f",BMI);
    }
    else if (BMI >= 24.9){
        printf("Uebergewicht %.1f",BMI);
    }
    else {printf("Fehler bei Eingabe!");};
    

    return 0;
}
