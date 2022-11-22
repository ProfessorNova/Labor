#include<stdio.h>

int stringlength(char* string){
    int i = 0;

    //zählt i solange bis das Ende des Strings mit '\0' kommt
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(){
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));
    return 0;
}