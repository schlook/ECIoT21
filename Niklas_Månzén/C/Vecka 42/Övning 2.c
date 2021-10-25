#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void klassKompisar(void)
{

    char fornamn[][256] = {"Sven", "Peter", "Klas", "Fnaske", "SlaskGunnar", };
    char efternamn[][256] = {"Morotsson", "Petersson", "Underjord", "Slaskesson", "Andersson","Megaman"};

    size_t fornamnRek = (sizeof(fornamn) / sizeof(fornamn[0]));
    size_t efternamnRek = (sizeof(efternamn) / sizeof(efternamn[0]));
    size_t totStorlek;
    totStorlek = fornamnRek;

    if (fornamnRek != efternamnRek)
    {
        printf("Det finns %d f\x94rnamn och %d efternamn... V\x84nligen se \x94ver detta.\n", fornamnRek, efternamnRek);
        return;
    }
        
    printf("De som g\x86r i min klass heter:\n");
    for (int i = 0; i < totStorlek; i++)
    {
        printf("%s %s\n", fornamn[i], efternamn[i]);
    }
       
}

int main(void)
{
    klassKompisar();
    return 0;
}