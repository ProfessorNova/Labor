#include <stdio.h>

//Funktion für Fakultät
int faculty(int wert){
    int ergebnis = 1;

    //Fallunterscheidung wenn wert = 0
    if(wert == 0) return 1;
    
    //rekursive Vorschrift
    if(wert > 1){
        ergebnis = faculty(wert-1);
    }

    return ergebnis * wert;
}

int main(){
    //Variablen
    int eingabe = 0;

    //Eingabe
    scanf("%d", &eingabe);

    //Ausgabe über Funktion
    printf("%d! = %d", eingabe, faculty(eingabe));

    return 0;
}