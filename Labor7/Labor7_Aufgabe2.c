#include <stdio.h>

void toUpper(char *arr){
    int i = 0;
    /*Solange der String nicht zuende ist,
    wird geschaut, ob der Buchstabe zwischen 'a' und 'z' liegt.
    Ist dies der Fall, so wird er zu einem großbuchstaben gemacht*/
    do {
        if (arr[i]>='a' && arr[i]<='z')
        {
            //-32 aufgrund der ASCII-Tabelle
            arr[i]=arr[i]-32;
        }
        i++;
    } while(arr[i] != '\0');
}

int main(){
    char arr[] = "Hallo Welt";
    toUpper(arr);
    printf("%s\n", arr);

    return 0;
}