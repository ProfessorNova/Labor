#include <stdio.h>

int main(){
    //Erstelle char Array
    char array[40];
    int zaehler = 0;

    //lese array ein
    scanf("%s", array);

    //zähle zeahler hoch wenn jetziger character ein Vokal ist
    for (int i = 0; i < 40; i++)
    {
        if (array[i] == 0) {break;}
        
        switch (array[i])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            zaehler++;
            break;
        
        default:
            break;
        }
    }

    //ausgabe
    printf("%d Vokale", zaehler); 

    return 0;
}