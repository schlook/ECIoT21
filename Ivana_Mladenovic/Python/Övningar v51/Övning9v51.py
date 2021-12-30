"""
Övningsuppgift 9
Skriv ett program för att hitta summan av siffrorna i ett heltal med while-loop.
Det vill säga 3 + 4 + 5
Skriv ut summan sedan.
"""
tal = int(input("Ange ett heltal: "))
summa = 0
# while-loopen körs tills talet blir 0
while (tal != 0):
    # i variabeln summa sparas summa + restvärde av tal%10, det blir sista siffran i det inmatade talet
    summa = summa + (tal % 10) 
    # tal delas med 10 och operatorn- // avrundar talet neråt 
    # tex om inmatat tal är 345 efter första varvet blir det 34,5 och avrundas till 34
    tal = tal//10 
print("Summan av talen är: ", summa)