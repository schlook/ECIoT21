#include <stdio.h>

int main(void)
{
    // enum veckoDagar innehållande 7 konstanter, Mandag, Tisdag etc.. 
    enum veckoDagar {Mandag, Tisdag, Onsdag, Torsdag, Fredag, Lordag, Sondag};

    enum veckoDagar dag; // tilldelar 'enum veckoDagar' variabeln: dag
    dag = Mandag; // tilldelar variabeln dag värdet av konstanten Mandag dvs = 0 då om vi inte anger annat alltid börjar på 0
    printf("Konstanten har värdet %d genom variabeln: dag\n", dag);

    return 0;
}