#include <stdio.h>

int main()
{
    int ganzzahl;
    float gleitkommazahl;
    char zeichen;

    scanf("%d %f %c",&ganzzahl,&gleitkommazahl,&zeichen);

    printf("Ganzzahlen    : %010d\n", ganzzahl);
    printf("Gleitkommazahl: %5.5f\n", gleitkommazahl);
    printf("Zeichen       : %c\n", zeichen);

    return 0;
}