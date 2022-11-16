#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //Varaiblen
    float celsius;
    float fahrenheit;

    //Celsius Fahrenheit Überschriftausgabe
    printf("Fahrenheit\tCelsius\n");

    for (int i = -20; i <= 300; i = i+20)
    {
        //gibt Fahrenheit Werte von -20 bis 300 in 20er-Schritten
        fahrenheit = i;
        //berechnet Celsius
        celsius=(5*(fahrenheit-32))/9;
        //Gibt formatierte Ausgabe aus
        printf("%10.0f\t%7.2f\n", fahrenheit, celsius);
    }

    return 0;
}