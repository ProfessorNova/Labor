#include <stdio.h>

int main(){
    //Erstelle char Array
    char array[40];
    int zaehler = 0;

    //lese array ein
    scanf("%s", array);

    for (int i = 0; i < 40; i++)
    {
        if (array[i] == 0) {break;}
        
        /*schaut ob jetziger Buchstabe im Array zwischen a unz z liegt
        und zaehlt diese*/
        if(array[i]>='a' && array[i]<='z'){
            zaehler++;
        }
    }

    //Ausgabe
    printf("%d Kleinbuchstaben", zaehler); 

    return 0;
}