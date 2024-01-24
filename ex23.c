#include <stdio.h>
void somma( int a , int b)
{
printf("la somma dei due numeri è :%d\n", (a + b));
}
void sottrazione( int a , int b)
{
    printf("la differenza tra i due numeri è: %d\n", ( a - b));
}
void moltiplicazione( int a, int b)
{
    printf(" la moltiplicazione tra i due numeri è: %d\n", (a * b));
}
void divisione(int a, int b)
{
    printf("la divisione tra i due numeri è: %d\n", ( a / b));
}
int main()
{
int x;
int y;
int operazione;
printf("inserisci due numeri\n");
scanf("%d %d", &x, &y);
printf("che operazione vuoi fare?\n ");
printf("premere:\n 1 per la somma\n 2 per la sottrazione\n 3 per la moltiplicazione\n 4 per la divisione\n");
scanf("%d", &operazione);
if(operazione == 1)
{
    somma(x , y);
}
else if( operazione == 2)
{
    sottrazione(x , y);
}
else if(operazione == 3)
 {
    moltiplicazione(x, y);
 }
 else if( operazione == 4)
 {
    divisione(x, y);
 }
 else 
 {
    printf("errore");
 }
}





