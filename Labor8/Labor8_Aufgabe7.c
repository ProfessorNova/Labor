#include <stdio.h>

//Funktion
int isPrime(int eingabe){
    //Variablen
    const int start_eingabe = eingabe;
    static int zaehler = 2;

    //Fallunterscheidung
    if (eingabe == 0 || eingabe == 1)
    {
        return 0;
    }

    //alle Teiler bis zur eingegeben Zahl
    if(zaehler+1 <= start_eingabe)
    {
        
        if ((float)(eingabe % zaehler) == 0)
        {
            //sobald ein Teiler gefunden wurde ist es keine Primzahl
            return 0;
        }
        else
        {
            //nächster Wert
            zaehler++;
            return isPrime(eingabe);
        }
    }
    else
    {
        //wenn kein Teiler gefunden wurde ist es eine Primzahl
        return 1;
    }
}

int main(){
    //Variablen
    int eingabe;

    //Eingabe
    scanf("%d", &eingabe);

    //Ausgabe über Funktion
    printf("%d", isPrime(eingabe));

    return 0;
}