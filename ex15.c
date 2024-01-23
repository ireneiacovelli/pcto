#include <stdio.h>
int main()
{
    int anno;
    printf("inserisci un anno\n");
    scanf(" %d", &anno);
    if(anno % 4 == 0)
    {
       
        if(anno % 100 != 0)
        {

        
        printf("anno è bisestile");
        }
    }
    else
    {
        printf("anno non è bisestile");
    }
}