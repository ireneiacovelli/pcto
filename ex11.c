#include <stdio.h>
int main()
{
    int america;
    int eta;
    printf("a che età puoi prendere la patente\n");
    scanf(" %d", &america);
    printf(" quanti anni hai\n");
    scanf(" %d", &eta);;
    if(eta >= 16)
    {
        printf("puoi prendere la patente\n");
    }
    else
    {
        printf("non puoi prendere la patente\n");

    }
    return(0);
}
