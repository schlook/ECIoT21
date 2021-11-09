#include <stdio.h>
//enum får namn 'färg'
typedef enum farg{spader = 0, ruter = 10, hjarter = 20, klever = 3};

int main(void)
{
    //skapar enum variabeln 'kort'
    enum farg kort;
    //använder mig av sizof för att få reda på storleken av enum variabeln
    int storlek=sizeof(kort);
    printf("Storlek på enum variabeln 'kort' är %d bytes", storlek);
    return 0;
}