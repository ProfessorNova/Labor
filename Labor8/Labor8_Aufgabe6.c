#include <stdio.h>

//Funktion um die Länge vom String zu bestimmen
int stringLength(char *string){
    int i = 0;

    while(string[i] != '\0')
    {
        i++;
    }
    
    return i;
}

//Funktion
char getFirstCapitalLetter(char *eingabe){
    //static int, damit es über die Rekursionen statisch bleibt
    static int i = 0;

    //testet alle Buchstaben im String bis zum ersten Großbuchstaben
    if (i < stringLength(eingabe))
    {
        //Gibt den Buchstaben aus falls er ein Großbuchstabe ist
        if (eingabe[i] >= 'A' && eingabe[i] <= 'Z')
        {
            return eingabe[i];
        }
        else
        {
            i++;
            //rekursive Vorschrift
            return getFirstCapitalLetter(eingabe);
        }
    }
    else
    {
        return ' ';
    }
}

int main(){
    //Variablen
    char string[100];

    //Eingabe
    scanf("%s", string);

    //Ausgabe über Funktion
    printf("%c", getFirstCapitalLetter(string));

    return 0;
}