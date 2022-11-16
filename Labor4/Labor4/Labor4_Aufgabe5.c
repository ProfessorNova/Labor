#include <stdio.h>

int main(){
    //Erstelle char Array
    char array[40];

    //lese array ein
    scanf("%s", array);

    for (int i = 0; i < 40; i++)
    {
        if (array[i] == 0) {break;}
        
        /*schaut ob jetziger Buchstabe im Array zwischen a und z liegt
        und ersetzt diese mit A bis Z*/
        if(array[i]>='a' && array[i]<='z'){
            array[i]=array[i]-32;
        }
        //und umgekehrt
        else if(array[i]>='A' && array[i]<='Z'){
            array[i]=array[i]+32;
        }
    }

    //Ausgabe
    printf("%s", array); 

    return 0;
}