'''Program gör en linjär sökning genom en lista, sätter en flagga om sökningen gav resultat'''

# deklarerar en lista med nummer
list = [2, 3, 5, 7, 11, 13, 17]
# nummret vi vill söka efter
n = int(input("Ange det nummer du vill söka efter: "))
# om (n) finns i list så flaggar vi 1 dvs sant, 
if n in list:
    found = 1
# om sant dvs så hittade vi numret i listan, med index(n) tar vi reda på vilket fält numret finns
if found == 1:
    print("Hittade nummer", n,"i fält", list.index(n))
else: # om found annat än 1, så hitades inte nummret
    print("Hittade inte numret!")