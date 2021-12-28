# definierar en funktion som tar emot ett argument, variabel a.
# ingen skillnad på deklarering av funktioner som returnerar eller ej
def OddOrEven(a):
    # om a går jämt ut med 2
    if a % 2 == 0:
        return 'Number is even' 
    # om (a) / 2 blir med rest = odd
    else:
        return 'Number is odd'
# tilldelar myNumb en int som får sitt värde från input("med ett medelande")
myNumb = int(input("Type a number: "))
# skriver ut det funktonen returnerar
print(OddOrEven(myNumb))