#include <stdio.h>
int main()
{
    char c;
    int a = 97;
    int e = 101;
    int i = 105;
    int o = 111;
    int u = 117;
    int A = 65;
    int E = 69;
    int I = 73;
    int O = 79;
    int U = 85;

    printf("inserisci un carattere\n");
    scanf(" %c", &c);
    

        if((c != a) && (c!=e) &&(c!= i) &&( c!= o) && (c!=u ) && ( c!= A) && (c != E) && (c != I) && (c != O) && (c != U))
         {
             printf(" il carattere è una consonante\n");
         }
         else if (( c < 65) && ( c > 90) && ( c < 97) && ( c > 122))
         {
            printf(" errore\n");

         }
        else
         {
             printf("il carattere è una vocale\n");
         }
   
    return(0);
}