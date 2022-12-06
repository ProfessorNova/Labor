#include <stdio.h>

//Funktion für Reihe
float reihe(float a, float x, int N){
    float ergebnis = 0;

    //Iteration von Reihe (beginnt bei i = 1 und endet bei i = N)
    for (int i = 1; i <= N; i++)
    {
        ergebnis = ergebnis + (a + 2 * i * x);
    }

    return ergebnis;
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