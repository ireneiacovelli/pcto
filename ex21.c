#include <stdio.h>
int main()
{
    int h;
    int b;
    int l1;
    int l2;
    
    printf(" inserisci l'altezza\n");
    scanf( "%d", &h);
     printf(" inserisci la base\n");
    scanf("%d", &b);
    printf(" inserisci il primo lato\n");
    scanf("%d", &l1);
    printf(" inserisci il secondo lato\n");
    scanf("%d", &l2);
    

   
    printf("perimetro:""%d\n", (b + l1 + l2));
    printf(" area:""%d\n", (h * b / 2));
    

}