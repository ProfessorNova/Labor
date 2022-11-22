#include<stdio.h>

int prime(int zahl){
    int teiler = 0;

    //zählt die Anzahl der Teiler
    for (int i = 1; i <= zahl; i++)
    {
        if(!(zahl%i)){
            teiler++;
        }
    }

    //wenn es genau zwei Teiler gibt, dann ist es keine Primzahl
    if (teiler == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    printf(prime(85) ? "Primzahl" : "KEINE Primzahl");
    return 0;
}