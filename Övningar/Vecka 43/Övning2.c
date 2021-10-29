#include <stdio.h>

// Skapa en typdefiniering
typedef int Byte;
// Du kan om du vill lägga till svenska ord.
typedef char Tecken;
// Inte innan typedef!
Byte addera(Byte tal1, Byte tal2);

Byte main(void)
{
    // Testa använd din nya typdefiniering
    Byte fem = 5;
    int tre = 3;
    // Eftersom det är en int så kallar jag på den med %d
    printf("Utan funktion: %d + %d = %d\n", fem, tre, fem + tre);
    printf("Med funktion:  %d + %d = %d", fem, tre, addera(fem, tre));

    

    return 0;
}

// int som returnerar int
Byte addera(Byte tal1, Byte tal2)
{
    return tal1 + tal2;
}

Tecken abc(Tecken def)
{
    return def + 2;
}