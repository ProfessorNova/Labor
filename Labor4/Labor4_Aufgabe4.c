#include <stdio.h>

int main(){
    //Erstelle char Array
    char str[40];
    char vowel;

    //lese array ein
    scanf(" %c %s", &vowel, str);

    //ersetzt Buchstabe im String mit vowel wenn es ein Vokal ist
    for (int i = 0; i < 40; i++)
    {
        if (str[i] == 0) {break;}
        
        switch (str[i])
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
            str[i] = vowel;
            break;
        
        default:
            break;
        }
    }

    //Ausgabe
    printf("%s", str); 

    return 0;
}