#include <stdio.h>
#include <stdlib.h>
int main(void){//varför int?
    printf("Vad heter min dator?\n");
    printf("Den heter: ");
    printf(getenv("COMPUTERNAME"));//hur vet man att man ska använda getenv?
}