#include <stdio.h>

//Funktion für Iteration
int potenz_iter(int a, int b, int n){
    int ergebnis = 1;

    //multipliziert n-Mal
    for (int i = 0; i < n; i++)
    {
        ergebnis = ergebnis * (a + b);
    }

    return ergebnis;
}

int main(){
    //Variablen
    int a;
    int b;
    int n;

    //Eingabe
    scanf("%d %d %d", &a, &b, &n);

    //Ausgabe über Funktion
    printf("%d", potenz_iter(a, b, n));

    return 0;
}