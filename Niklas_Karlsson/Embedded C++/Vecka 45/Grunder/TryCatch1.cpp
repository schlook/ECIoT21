#include <iostream>

// Varje program måste ha en main()-funktion
int main(void)
{
    // vi försöker med något.
    try
    {
        // I det här fallet kastar vi bara ett heltal.
        throw 20;
    }
    // Vi fångar upp heltalet, variabeln kan heta vad som helst.
    // e för error.
    catch (int e)
    {
        std::cout << "Ett fel inträffade. Undantagsnummer " << e << std::endl;
    }
    // vi säger fortfarande till operativsystemet
    // att allt gick bra när programmet avslutades.
    return 0;
}