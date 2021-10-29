#include <stdio.h>
int main(void)
{
    int tid;
    printf("Ange antal sekunder: ");
    scanf("%d", &tid);
    int tim,min, sek;
    //3600=1h för att räkna antal timmar delar vi med 3600 för att se
    //hur många ggr 3600 går i antalen angivna sekunder
    tim=tid/3600;
    //resterande sekunder delas med 60 för att se hur många ggr 60 går i dem
    min=(tid%3600)/60;
    //Den resten som blir kvar efter vi räknat ut minuter blir antalet sek
    sek=(tid%3600)%60;
    printf("Det blir %d timmar, %d minuter och %d sekunder!", tim, min, sek);
    return 0;
}