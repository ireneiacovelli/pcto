#include <stdio.h>
void differenza1( int anno, int luna)
 {
    printf("gli anni in più sono:%d\n", (anno - luna));
 }
 void differenza2( int anno, int luna)
 {
    printf(" gli anni in meno sono: %d\n", (luna - anno));
 }
int main()
{
    int anno;
    int luna = 1969;
    
    printf("inserisci il tuo anno di nascita\n");
    scanf("%d", &anno);
    if( anno == luna)
    {
        printf(" sei nato lo stesso anno dello sbarco\n");
    }
    else if (anno > luna)
    {
        differenza1(anno , luna);
    }
    else if  ( luna > anno)
    {
        differenza2(anno, luna);
    }


}