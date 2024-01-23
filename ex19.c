#include <stdio.h>
int main()
{
    int numero;
    int prezzo;
    int sconto;
    int sconto2;
    printf("inserisci numero dei pezzi\n");
    scanf(" %d", &numero);
    prezzo = numero * 5;
    while ( numero > 0)
    {
    if((numero >= 30 )&& (numero < 50))
    {
        sconto = prezzo * 0.9;
        printf("totale da pagare è:" "%d\n", (sconto));

    }
    else if(numero > 50)
    {
        sconto2 = prezzo * 0.85;
        printf("totale da pagare è:" "%d\n", (sconto2));
    }
    else
    {
        printf("non c'è sconto:" "%d\n", (prezzo));
    }
    printf(" inserisci numero dei pezi\n");
    scanf("%d", &numero);
    }


}