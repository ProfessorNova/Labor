#include <stdio.h>

void append(char *string, char *added_string){
    int i = 0;
    int j = 0;

    //Zählt i durch bis string zuende ist
    while(string[i] != '\0'){
        i++;
    }

    //Zählt i,j durch bis added_string komplett string angehängt wird
    while (added_string[j] != '\0'){
        string[i] = added_string[j];
        i++;
        j++;
    }
}

int main(){
    char buffer[40] = "Hallo ";
    append(buffer, "Welt");
    printf("%s\n", buffer);
}