"""
Övningsuppgift 12
Skriv ett program för att kontrollera om det givna heltal är ett primtal eller inte.
Be användaren skriva in ett tal och ta sedan reda på om det talet är ett primtal eller inte
"""

tal = int(input("Ange ett heltal: "))
# det är ett primtal
primtal = True
# delar med 2 och avrundar neråt
for i in range(2, tal//2):
        # om tal delat på i inte har någon rest
        if (tal % i) == 0:
            # det är inte primtal
            primtal = False
            break # avbryter loopen
# om det är sant            
if primtal == True:
    print(tal, "är ett primtal")
# annars
else:
    print(tal, "är inte ett primtal")