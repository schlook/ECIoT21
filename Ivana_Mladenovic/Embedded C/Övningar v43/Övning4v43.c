#include <stdio.h>
//Måndag får plats nr 1 istället för automatiskt 0
//då blir det rätt utskrift nedan 1-7 mån-sön
enum vecka {Man=1, Tis, Ons, Tor, Fre, Lor, Son };
int main()
{
    enum vecka dag;
    for (size_t i = Man; i <=Son; i++)
    {
        printf("%d\t", i);
    }
    

    return 0;
}