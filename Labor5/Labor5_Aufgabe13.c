#include<stdio.h>

int main(){
    //deklariere int-Array der Länge 4
    int arr[4];
    int summe = 0;
    double durchschnitt = 0;

    //lese Werte ins Array ein
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    //berechne Summe
    for (int i = 0; i < 4; i++)
    {
        summe += arr[i];
    }

    //berechne Durchschnitt
    for (int i = 0; i < 4; i++)
    {
        durchschnitt += (float)arr[i]/4;
    }

    //Ausgabe
    printf("Summe: %d\n", summe);
    printf("Durchschnitt: %lf", durchschnitt);
    
    return 0;
}