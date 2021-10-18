#include <stdio.h> 

//global variabel 
char text[50];
// function
void minfunction1 (void);

int main (void) 
{
    //anropar functionen i main 
     minfunction1(); 

     printf("%s", text); 

     return 0 ;
}

void minfunction1(void)
{

    //inmatnings text 
printf("skriv in din text\n"); 
scanf("%s" , &text); 


}