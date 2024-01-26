#include <stdio.h>
#include <string.h>

int main()
{
    
    int scelta;
    int intolleranza;
    char ciboIntollerante[50];
    char nome[15];
    char cognome[20];
    char utente[20];
    char password1[10];
    char password2[20];
    printf("inserisci nome :\n");
    scanf(" %s", nome);

    printf("inserisci cognome:\n");
    scanf(" %s", cognome);

    printf("inserisci il nome utente:\n");
    scanf(" %s", utente);

    printf("inserisci una password di max 10 caratteri:\n");
    scanf(" %s", password1 );

    printf("conferma la tua password\n");
    scanf(" %s", password2);

    printf(" %d", strcmp(password2,password1));
    while(strcmp(password2,password1) != 0)
    {
        printf("errore inserisci nuovamente la password\n");
        scanf(" %s", password2);
        if(strcmp(password2,password1) == 0)
        {
            break;
        }
        else
        {
            printf("errore inserisci nuovamente la password\n");
            scanf(" %s", password2);
        }
        
    }
    printf("allega una foto degli alimenti nel tuo frigo\n");
    printf("nel tuo frigo c'è:\n cavolo nero\n carciofi\n pollo\n pangrattato\n macinato\n ceci\n tofu\n funghi misti\n cipolla\n aglio\n");

    printf(" sei intollerante a qualcosa?\n premi 1 se si\n o premi 2 se no\n");
    scanf(" %d", &intolleranza);
    if( intolleranza == 1)
    {
        printf(" a che cosa?\n");
        scanf(" %s", ciboIntollerante);
        printf("Sei intollerante a : %s\n", ciboIntollerante);
    }

    printf("che abitudini alimentari hai?\n se sei vegetariano premi 1\n se sei vegano premi 2\n se sei onnivoro premi 3\n");
    scanf(" %d", &scelta);
    if(scelta== 1)
    {
        printf("primo:risotto ai carciofi\nsecondo:falafel\ncontorno: funghi trifolati\n");
    }
    else if(scelta == 2)
    {
        printf("primo: vellutata di ceci\nsecondo:crocchette di tofu\ncontorno:chips di cavolo nero\n");
    }
    else if(scelta== 3)
    {
        printf("primo: tagliatelle al ragu bianco\nsecondo: petto di pollo impanato\ncontorno:carciofi alla giudia\n");
    }
    return(0);
    
}