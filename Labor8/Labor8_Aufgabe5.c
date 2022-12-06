#include <stdio.h>

//Funktion für Reihe (rekursiv)
float reihe(float a, float x, int N){
    float ergebnis = 0;

    //rekursive Vorschrift
    if (N > 1)
    {
        ergebnis = reihe(a, x, N-1);
    }
    
    return ergebnis + (a + 2 * N * x);
}

int main(){
    //Variablen
    float a;
    float x;
    int N;

    //Eingabe
    scanf("%f %f %d", &a, &x, &N);

    //Ausgabe über Funktion
    printf("%.1f", reihe(a, x, N));

    return 0;
}