#include <stdio.h> 
// global fältvariabel float med argument
float mittTal (float num[]);

#define STORLEK 9

int main ()
{
    //deklaration utav variabeln resultat
float resultat , num[STORLEK] = {11, 13 ,2 , 4};

// resultat = function , skrvier ut med 2 decimaler
resultat = mittTal(num); 
printf("resultat = %.2f", resultat); 
    return 0 ; 
}
//functionen med en for loop 
float mittTal (float num [])
{
  float sum; 
  for (int i = 0; i < STORLEK; i++)
  {
      //uträckningen i functionen
      sum += num[i];
    // returnerar summan 
      return sum;
  }
  

}