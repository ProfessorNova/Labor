#include <stdio.h>

int main(){
    //Erstelle char Arrays
    char array[40];
    char array_rueckwaerts[40];
    int array_laenge = 0;

    //lese Array ein
    scanf("%s", array);

    //überprüfe wie lang das Array ist
    for(int i = 0; i<40; i++){
        if (array[i] == 0) {break;}

        array_laenge++;
    }

    /*Index von array_rueckwaerts nimmt zun und Index von array nimmt ab
    so wird array rückwärst in array_rueckwaerts eingespeichert*/
    for (int i = 0; i < array_laenge; i++)
    {
        array_rueckwaerts[i]=array[array_laenge-i-1];
    }

    //Ausgabe
    printf("%s", array_rueckwaerts);

    return 0;
}