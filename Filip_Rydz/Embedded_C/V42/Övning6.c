#include <stdio.h>

// void = returnerar ingenting, dock innehåller *a och *b som argument
void swap(int *a, int *b); 

int main(void)
{
    int val1 = 5, val2 = 8;
    
    printf("Val1 = %d\nVal2 = %d\n", val1, val2);
    swap(&val1, &val2); // skickar 5, 8 som argument till funktionen
    printf("Nu har de bytt plats\n");
    printf("Val1 = %d\nVal2 = %d\n", val1, val2);

    return 0;
}
void swap(int *a, int *b)
{
    // för att inte fölora värdet i a sparar vi det temporärt i temp
    int temp;
    // tillderlar temp värdet a
    temp = *a;
    // a får värdet av b
    *a = *b;
    // och b får värdet av temp, dvs ursprungsvärdet av a
    *b = temp;
}
