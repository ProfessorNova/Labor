#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //Varaiblen
    float celsius;
    float fahrenheit;

    //Celsius Fahrenheit Überschriftausgabe
    printf("Celsius\tFahrenheit\n");

    for (int i = -20; i <= 300; i = i+20)
    {
        //gibt Celsius Werte von -20 bis 300 in 20er-Schritten
        celsius = i;
        //berechnet Fahrenheit
        fahrenheit = ((celsius*9)/5) + 32;
        //Gibt formatierte Ausgabe aus
        printf("%7.0f\t%10.0f\n", celsius, fahrenheit);
    }

    return 0;
}