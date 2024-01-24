#include <stdio.h>
void cubo() 
{
    int numero;
    int cubo;
    printf(" inserisci un numero\n");
    scanf(" %d", &numero);
    cubo = numero * numero;
    printf("il cubo del numero è :%d\n", cubo);
}

int main()
{
    cubo();
    cubo();
    cubo();
    cubo();
}
