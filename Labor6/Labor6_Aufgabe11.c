#include<stdio.h>

int weekday(int d, int m, int y){
    //Eingefügte Formel von Wikipedia
    if (m < 3) y = y - 1;
    return ((int)(d + (2.6 * ((m + 9) % 12 + 1) - 0.2) 
    + y % 100 + (y % 100 / 4) + (y / 400) - 2 * (y / 100) - 1) 
    % 7 + 7) % 7 + 1;
}

int main(){
    switch (weekday(06,01,2023))
    {
    case 1:
        printf("Montag");
        break;
    case 2:
        printf("Dienstag");
        break;
    case 3:
        printf("Mittwoch");
        break;
    case 4:
        printf("Donnerstag");
        break;
    case 5:
        printf("Freitag");
        break;
    case 6:
        printf("Samstag");
        break;
    case 7:
        printf("Sonntag");
        break;

    
    default:
        break;
    }
    return 0;
}