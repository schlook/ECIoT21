#include <stdio.h>
//  för att komma åt rand()
#include <stdlib.h>
// för att komma åt time
#include <time.h> 




int main (void)
{
    // Ökning med tiden , anropas en gång
    srand(time(0));

    // variabel som inte heter rand
    int random = rand();
    //deklaredade variablar med data typen int , +1 för att utesluta 0 
    int varaNNan = (rand() % 2 ) * + 1 ;
    int trueFalse = rand() % 2 + 1 ;
    int ForTio = rand() % 40 +1; 

    // från 0 - RAND_MAX 
    printf("%d\n", random);
    // 1 eller 2 
    printf("%d\n" , varaNNan);
    //0  eller 1 
    printf("%d\n", trueFalse);

    printf("%d\n" , ForTio); 
 
   
    // variabel med datatypen float 
    //från 0 - RAND_MAX
    float randm = rand();
    
    float varaNnan = (rand() % 2 ) * + 1 ;
  
    float TrueFalse = rand() % 2 ;

    float Tretio = rand() % 30 +1; 
    
    //från 0 - RAND_MAX
     printf("%2.f\n", randm);
    // 1 eller 2 
    printf("%2.f\n" , varaNnan);
    // 0 eller 1 
    printf("%2.f\n", TrueFalse);

    printf("%2.f\n" , Tretio); 
 
    
    return 0; 


}