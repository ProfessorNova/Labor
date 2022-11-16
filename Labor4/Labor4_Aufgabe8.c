#include <stdio.h>

int main(){
    //erstelle Arrays und Variablen
    float noten[10];
    int endeIndex = 9;
    float durchschnitt = 0;

    //Eingabe von Noten und setzt endeIndex auf erste Note, welche falsch ist
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &noten[i]);

        if(noten[i]<1 || noten[i]>6) 
        {
            endeIndex = i;
            break;
        }
    }

    if(endeIndex > 0){
        //berechne Durchschnitt
        for (int i = 0; i < endeIndex; i++)
        {
            durchschnitt = durchschnitt + noten[i]/endeIndex;
        }
    }

    //Ausgabe
    printf("Durchschnitt (N=%d): %.2f", endeIndex, durchschnitt);

    return 0;
}