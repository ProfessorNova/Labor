#include <stdio.h>

int main(){
    //Erstelle char Array
    char array[40];
    int abschnitt_start, abschnitt_ende;

    //lese array und Abschnitt ein
    scanf("%s %d %d", array, &abschnitt_start, &abschnitt_ende);

    //Ausgabe
    printf("%s %d-%d: ", array, abschnitt_start, abschnitt_ende);

    //Ausgabe von Ausschnitt
    for (int i = abschnitt_start; i <= abschnitt_ende; i++)
    {
        printf("%c", array[i]);
    }

    return 0;
}