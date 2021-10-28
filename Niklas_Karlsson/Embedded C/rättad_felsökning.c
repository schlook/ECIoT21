/* 
 * Den här delen kan ni ignorera
 */
#ifdef _WIN32
#include <windows.h>
#else

#define Sleep(x)      \
    usleep(x * 1000); \
    fflush(stdout);
#endif

/* 
 * Börja felsök härifrån
 * ------------------------
 */

#include <stdio.h>
// #include <stdbool.h>

// Var-Variabeln
int var;

// Felstavad
// int myfunction3(void);
int myfunction2();
int myfunction(int var);

// Main funktionen
int main()
// double main(int argc)
{
    //  Glömde bort vi behöver ju var-variabeln
    int var;
    // Läser värdet från myfunction2
    var = myfunction2();
    printf("Ange ett annat nummer\n");

    scanf("%d", &var);
    // skriver ut det
    printf("%d\n", myfunction(var));
    // printf("%d\n", (44 - myfunction(var)));

    Sleep(5000);

    return 0;
    // return 13.23;
}

// Den första funktionen
int myfunction(int var)
{
    // Ställer in var2 till 23, detta är vårt fasta värde
    int var2 = 23, sum;
    // Slår ihop var med var2
    sum = var + var2;
    // Ger tillbaka svaret, kom på att vi behöver en double!
    // datatypen är int
    return sum;
}

// Funktionen tar ej emot argument
int myfunction2(void)
{
    // Skriv ut
    printf("Ange ett nummer:\n");
    scanf("%d", &var);

    return var;
}