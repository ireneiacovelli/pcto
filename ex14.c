#include <stdio.h>
int main()
{
    int x;
    int y;
    int r;
    
    printf("inserisci tre numeri\n");
    scanf(" %d %d %d", &x, &y, &r);
   
    if(y-x==r-y)
    {
        printf("è una progressione aritmetica\n");
    }
    else
    {
        printf("non è una progressione\n");
    }
}