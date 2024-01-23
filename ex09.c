#include <stdio.h>
int main()
{
    int x;
    printf(" inserisci la tua età\n");
    scanf(" %d", &x);
    if( x>=18)
    {
        printf("l'utente è maggiorenne\n");
    }
    else
    {
        printf("l'utente è minorenne\n");
    }
    return(0);
}