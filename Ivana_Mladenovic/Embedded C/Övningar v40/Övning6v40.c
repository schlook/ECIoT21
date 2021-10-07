#include <stdio.h>
int main(void)
{
    int val;
    printf("Gör ett val (1-4): ");
    scanf("%d2", &val);
    switch (val)
    {
    case 1:
        printf("Hej på dig!");
        break;
    case 2:
        printf("Vädret är fint idag, du borde ta en promenad!");
        break;
    case 3:
        printf("Ska du inte ut borde du sträcka på dig lite!");
        break;
    case 4:
        printf("Tack för besöket och välkommen åter!");
        break;
    default:
        printf("Du har angett fel val!");
        break;
    }
    return 0;
}