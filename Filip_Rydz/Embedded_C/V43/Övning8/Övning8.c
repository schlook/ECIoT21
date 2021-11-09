#include <stdio.h>
#include <string.h>
/* istället för att deklarera strukturen 'Books' och dess medlemmar
i huvudprogrammet har jag valt att lägga den i en separat fil (Books.h) och
inkludera den så här istället */
#include "Books.h" 

/* funktionen som ska skriva ut våra böcker. Den tar emot 2 argument,
*book = pointer som pekar till vår struktur 'Books' */
void outputBooks(struct Books *book, int i); // 'int i' för att skriva ut 1a eller 2a boken.


int main(void)
{
    struct Books book1; // deklarerar book1 av typen Books
    struct Books book2; // deklarerar book2 av typen Books
    int i = 1; // vilken bok vi menar, dvs bok 1 eller bok 2

    strcpy(book1.title, "Mastery"); // titeln tilldelas med hjälp av 'strcpy' som ingår i 'string.h'
    strcpy(book1.author, "Robert Greene");
    strcpy(book1.subject, "Management");
    book1.ISBN_nr = 9781781250914; // här räcker med tilldelningsoperatorn = för att ge värde
    
    strcpy(book2.title, "Atomic Habits");
    strcpy(book2.author, "James Clean");
    strcpy(book2.subject, "Personal Development");
    book2.ISBN_nr = 9781847941831;
   
    printf("\n");
    printf("Welcome to the best Book(et)list!\n");

    // anropar funktionen, skickar med 2 värden, dels adressen till struct book1 resp book2 samt 'i' för vilken bok..
    outputBooks(&book1, i);
    outputBooks(&book2, i + 1);
    printf("\n");
   
    return 0;
}
void outputBooks(struct Books *book, int i) // pekare *book som pekar till vår struct Books samt i som är numrering av våra böcker
{
    printf("\nBook %d:\n", i); // int i = numrering av bok 1 resp bok 2
    printf("Title: %s\n", book->title); // kommer åt medlemmarna med hjälp av piloperatören ->
    printf("Author: %s\n", book->author); // -> används för att komma åt en medlem i en struktur
    printf("Subject: %s\n", book->subject); // som refereras av pekaren 'book'. 
    printf("ISBN: %ld\n", book->ISBN_nr);
}