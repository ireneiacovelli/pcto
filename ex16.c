#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("inserisci tre numeri\n");
    scanf(" %d %d %d", &a, &b, &c);
    
    if( d > c && e > b && f > a)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
}