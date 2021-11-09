#include <iostream>

int main(void)
{
    // Nummer1, nummer2 och operator
    double n1, n2, ans;
    // Tecken för operator och fortsätt-frågan.
    char oper, ch;

    do
    {
        std::cout << "Skriv in första numret, operator, andra numret: " << std::endl;
        std::cin >> n1 >> oper >> n2;
        switch (oper)
        {
        case '+':
            ans = n1 + n2;
            break;
        case '-':
            ans = n1 - n2;
            break;
        case '*':
            ans = n1 * n2;
            break;
        case '/':
            ans = n1 / n2;
            break;
        default:
            ans = 0;
        }
        std::cout << "Svaret = " << ans << std::endl
                  << "Vill du ange ett nummer till? (Skriv 'j' eller 'n')? ";
        // Kollar vårt tecken nu.
        std::cin >> ch;
    } while (ch != 'n');

    std::cout << "Tack för att du använde denna simpla miniräknare. Ha en bra dag!" << std::endl;
    return 0;
}