// Behöver inte .h
#include <iostream>

// Varje program måste ha en main()-funktion
int main(void)
{
    // Sparar vårt tal.
    int tal;
    // Samma sak som printf("Hej alla kompisar!\n");
    std::cout << "Hej alla kompisar! " << std::endl;
    // Samma sak som scanf("%d", &tal);
    std::cin >> tal;
    // Skriver ut vårt tal. Även om du skirver in 1ab kommmer
    // Endast 1 att skrivas ut.
    std::cout << "Talet är: " << tal << std::endl;
    // vi säger fortfarande till operativsystemet
    // att allt gick bra när programmet avslutades.
    return 0;
}