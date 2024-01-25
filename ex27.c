#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    int x1;
    int x2;
    int delta;
    
    printf(" inserisci tre valori\n");
    scanf(" %d %d %d", &a, &b, &c);
    delta = b*b-(4*a *c);
    printf("delta è uguale a:%d\n", delta);
    x1 = (-b+sqrt(delta))/2*a;
    x2 = (-b-sqrt(delta))/2*a;
    if(delta > 0)
    {
        printf("i risultati sono:%d %d\n", x1, x2);
    }
    else if( delta == 0)
    {
        x1==x2;
        printf(" i risultati coincidono:%d %d\n", x1, x2);
    }
    else if( delta < 0)
    {
        printf("l'equazione non ammette soluzioni reali\n");
    }
    return(0);
}