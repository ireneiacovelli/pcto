#include <stdio.h>
int main()
{
    int tempo;
    int scelta;
    int intolleranza;
    char ciboIntollerante[50];
    char nome[15];
    char cognome[20];
    char utente[20];
    char password[10];
    printf("inserisci nome :\n");
    scanf("%s", nome);
    printf("inserisci cognome:\n");
    scanf("%s", cognome);

    printf("inserisci il nome utente:\n");
    scanf("%s", utente);
    printf("inserisci una password di 10 carattere che deve contenere una maiuscola:\n");
    scanf("%s", password );
    
    printf("allega una foto degli alimenti nel tuo frigo\n");
    printf("nel tuo frigo c'è\n");
    printf(" sei intollerante a qualcosa?\n premi 1 se si\n o premi 2 se no\n");
    scanf("%d", &intolleranza);
    if( intolleranza == 1)
    {
        printf(" a che cosa?\n");
        scanf(" %s", ciboIntollerante);
        printf("Sei intollerante a : %s\n", ciboIntollerante);
    }
    printf("che abitudini alimentari hai?\n se sei vegetariano premi 1\n se sei vegano premi 2\n se sei onnivoro premi 3\n");
    scanf("%d", &scelta);
    if(scelta== 1)
    {
        printf("primo:gnocchi alla sorrentina\n secondo:falafel\n contorno:\n");
    }
    else if(scelta == 2)
    {
        printf("primo: vellutata di ceci\n secondo:crocchette di tofu\n contorno:chips di cavolo nero\n");
    }
    else if(scelta== 3)
    {
        printf("primo:\n secondo:\n contorno:\n");
    }
}