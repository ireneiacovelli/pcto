#include <stdio.h>
int main()
{
    int italia;
    int eta;
    printf("inserisci a che età puoi prendere la patente\n");
    scanf(" %d", &italia);
    printf("inserisci la tua età\n");
    scanf(" %d", &eta);
    if(eta >= 18)
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf(" non puoi prendere la patente");
    }
    return(0);
}