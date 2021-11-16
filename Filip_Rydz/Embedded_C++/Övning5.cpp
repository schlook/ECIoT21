#include <iostream>
/* deklarerar en funktion som gör en sk 'exponentiering' dvs tar en bas och multiplicerar det (upphöjt) antalgånger
dvs med en 'exponent', svaret blir sk potens. bas upphöjt med exponent = potens */
double exponentiering(double bas, int exP = 2); // exPonenten är satt till värdet = 2 ifall inget nytt tilldelas i main

int main()
{
    double bas, pot; //double's bas och pot, pot är resultatet av och returvärdet av funktionen 'exponentiering()'
    int exponent; // exponent = användarens inmatning
    char svar; // 'j' eller 'n'
    std::cout << std::endl << "Det här programmet utför en exponentiering, dvs en bas upphöjt med en exponent = potens" << std::endl;
    std::cout << "Ange bas: ";
    std::cin >> bas; // bas definieras här.

    std::cout << "Vill du själv ange en exponent? (j/n)" << std::endl;
    std::cin >> svar; // j / n svar

    if(svar == 'j') // om 'j' dvs ja så tilldelas 'exponent' användarens inmatning
    {
        std::cout << "Ange exponent: ";
        std::cin >> exponent;
        // och funktionen anropas med 'bas' och 'exponent' som argument, variablen tilldelas funktionens returvärde
        pot = exponentiering(bas, exponent); 
        std::cout << bas << " upphöjt i " << exponent << " får en potens på: " << pot << std::endl;
    }
    /* om 'n', dvs nej så anropas funktionen med endast 'bas' som argument, 'exponenten' är redan definierad iom
    deklarationen ovan main, funktionens return tilldelas variabeln 'pot' = potens */
    else if(svar == 'n') 
    {
        pot = exponentiering(bas);
        std::cout << bas << " upphöjt i 2 får en potens på: " << pot << std::endl;
    }
    else // om fel inmatning görs körs else.
    {
        std::cout << "Fel inmatning, försök igen." << std::endl;
        main(); // skriver ut texten nedan lika många gånger som man fått else att köras. ?
    }
    
    return 0;
}
double exponentiering(double bas, int exponent) // 10, 3
{
    double pot = 1.0;
    for (int i = 0; i < exponent; i++)
    {
        /* *= dvs multiplicerings- och tilldelningsoperator. 'pot' multipliceras för engång med 'bas' (pot = 1.0)
         sen multi med sig självt osv, så många gånger som 'exponent' är */ 
        pot *= bas; 
    }
    return pot;
}