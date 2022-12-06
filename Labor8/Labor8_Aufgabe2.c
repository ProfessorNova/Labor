#include <stdio.h>

//Funktion für Rekursion
int potenz_rekrusive(int a, int b, int n){
    int ergebnis = 1;

    //Fallunterscheidung wenn n = 0
    if(n == 0) return 1;

    //solange n > 1 findet rekursion statt
    if(n > 1){
        ergebnis = potenz_rekrusive(a, b, n-1);
    }

    return ergebnis * (a+b);
}

int main(){
    //Variablen
    int a;
    int b;
    int n;

    //Eingabe
    scanf("%d %d %d", &a, &b, &n);

    //Ausgabe über Funktion
    printf("%d", potenz_rekrusive(a, b, n));

    return 0;
}