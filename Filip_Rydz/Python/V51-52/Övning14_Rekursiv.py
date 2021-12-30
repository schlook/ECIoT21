'''Programet tar emot ett tal från användaren, om med hjälp av en rekursiv funktion skrivs talet ut samtidigt som det minskar ner till 0'''

# definierar en rekursiv funktion, dvs en funktion som kallar på sig själv
# funktionen tar emot ett argument, ett heltal
def rekursion(x):
    if x > 0: # så länge är större än 0
        print(x) ## skriv ut talet
        rekursion(x - 1) # återanropa funktionen dock med argumentet tal - 1
n = int(input("Ange ett heltal: "))
rekursion(n) # kalla på funktion med ett heltal