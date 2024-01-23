#include <stdio.h>
int main()
{
    int v;
    int e;
    int i;
    int s;
    int l;
    printf("inserisci l'età di v\n");
    scanf("%d", &v);
    printf("inserisci l'età di e\n");
    scanf("%d", &e);
    printf("inserisci l'età di i\n");
    scanf("%d", &i);
    printf("inserisci l'età di s\n");
    scanf("%d", &s);
    printf("inserisci l'età di l\n");
    scanf("%d", &l);
    printf("risultato=%d\n", (v+e+i+s+l));
}