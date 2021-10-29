#include<stdio.h> 
#define STORLEK 3

int main (void)

{

int a[STORLEK] [STORLEK]

int b[STORLEK] [STORLEK]

int sum[STORLEK] [STORLEK]

printf("Skriv in fält i matris \"a\" (%dx%d): \n", STORLEK, STORLEK);
    
for (int rad = 0; rad < STORLEK; rad++)
{
    for (inte kol = 0; kol < STORLEK; kol++)
    {
       scanf("%d", a& [rad][kol]);
    }
   
}


printf("Skriv in fält i matris \"b\" (%dx%d): \n", STORLEK, STORLEK);
    
for (int rad = 0; rad < STORLEK; rad++)
{
    for (inte kol = 0; kol < STORLEK; kol++)
    {
       scanf("%d", b& [rad][kol]);
    }

  
}
for (int rad = 0; rad < STORLEK; rad++)
{
    for (int kol = 0; kol < STORLEK; kol++)
        {
            sum[rad][kol] = a[rad][kol] + b[rad][kol];
        }
}

printf("\nSumma av matriser a+b = \n");
    // Rad = Rad
    for (int rad = 0; rad < STORLEK; rad++)
    {
        // Kol = Kolumn
        for (int kol = 0; kol < STORLEK; kol++)
        {
            printf("%d ", sum[rad][kol]);
        }
        printf("\n");
    }

    return 0;
}