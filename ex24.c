#include <stdio.h>
int main()
{
    int lat1;
    int lat2;
    int lat3;
    printf("inserisci lunghezza lat1\n");
    scanf("%d", &lat1);
    printf("inserisci lunghezza lat2\n");
    scanf("%d", &lat2);
    printf("inserisci lunghezza lat3\n");
    scanf("%d", &lat3);
    while((lat1 + lat2 > lat3) && ( lat2 + lat3 > lat1) && (lat1 + lat3 > lat2))
    {
    if((lat1 == lat2) && (lat2 == lat3) && (lat1 == lat3))
    {
        printf(" il triangolo è equilatero\n");
    }
    else if ((lat1 != lat2) && (lat2 != lat3) && ( lat1 != lat3))
    {
        printf(" il triangolo è scaleno\n");
    }
    else if ((lat2 == lat3) && (lat2 != lat1) && (lat3 != lat1) || (lat1 == lat2) && (lat1 != lat3) && (lat2 != lat3) || (lat1 == lat3) && (lat1 != lat2) && (lat3 != lat2))
    {
        printf(" il triangolo è isoscele\n");
    }
    
    
    }
}