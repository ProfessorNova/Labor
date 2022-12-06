#include <stdio.h>

void ownStrcpy(char *cpy_string, char *org_string){
    int i = 0;
    // Wird ausgeführt bis org_string zuende ist
    do {
        //cpy_string werden Stück für Stück werte von org_string zugewiesen
        cpy_string[i] = org_string[i];

        i++;
    } while(org_string[i] != '\0');
}

int main(){
    char originalString[] = "Programmieren";
    char copiedString[40];
    ownStrcpy(copiedString, originalString);
    printf("%s", copiedString);
}