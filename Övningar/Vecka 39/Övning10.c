#include <stdio.h>

int main(void)
{
    int val, tal1, tal2;

    printf("Skriv ett heltal mellan 1 till 4 enligt följande tabell:\n");
    printf("1. Addition (+)\n");
    // Stavat fel på Subtraktion :(
    printf("2. Subtraktion (-)\n");
    printf("3. Multiplikation (*)\n");
    printf("4. Division (/)\n");

    scanf("%d", &val);

    if ((val > 4) || (val < 1))
    {
        // skriv ut att användaren angett fel val
        printf("Du har angett ett felaktigt val.\n");
        printf("Var god starta om programmet.\n");
    }
    else
    {
        printf("Skriv in två heltal:\n");
        // scanf("%d%d", &tal1, &tal2) tar två tal, antingen i rad eller med mellanslag.
        // Den kommer alltså vänta tills den har två separatat tal att läsa in
        scanf("%d%d", &tal1, &tal2);

        if (val == 1) 
        {
            printf("Addition av %d + %d blir %d\n", tal1, tal2, (tal1 + tal2));
        }
        else if (val == 2)
        {
            // Felstavat, ändrat
            printf("Subtraktion av %d - %d blir %d", tal1, tal2, (tal1 - tal2));
        }
        else if (val == 3)
        {
            printf("Multiplikation av %d * %d blir %d", tal1, tal2, (tal1 * tal2));
        }
        else if (val == 4)
        {
            // Tal 1 får inte vara noll, kan inte dividera 0 med något.
            printf("Division av %d / %d blir %d", tal1, tal2, (tal1 == 0) ? 0 : (tal1 / tal2));
        }
    }

    return 0;
}