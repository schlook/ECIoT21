#include <stdio.h>
#include <windows.h>

int main (void)

{
  
  int i  = 1 ;
  
  do
  {
      printf(".");
      i++; 
      Sleep(250);
     
  }
   while (i <= 3);

   while (i >= 3 && i <= 6 )
   {
      printf("-");
      i++;
      Sleep(500);
   }
   
    while (i >=6 && i <= 9)
    {
        printf(".");
        i++;
        Sleep(250);
    }
    


}