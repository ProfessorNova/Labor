#include <stdio.h>

int main()
{
    //variablen deklarieren
    float grad_Celsius;
    float grad_Fahrenheit;

    //Wert für Fahrenheit wird eingelesen
    scanf("%f", &grad_Fahrenheit);

    //rechnet Fahrenheit in Celsius um
    grad_Celsius = (5*(grad_Fahrenheit-32))/9;

    //Ausgabe
    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius", grad_Fahrenheit, grad_Celsius);

    return 0;
}
