"""
Övningsuppgift 6
Skriv ett program som kontrollerar om det givna heltal är en multipel av 5 och 7
Fråga efter ett tal och skriv sedan ut om numret är en multipel av 5 eller 7, eller om det inte stämde 
alls.
"""
tal=int(input("Ange ett heltal: "))
# om talet är delbar med både 5 och 7
if (tal % 5 == 0 and tal % 7 == 0):
    print(tal, "är en multipel av 5 och 7")
# annars
else:
    print(tal, "är inte en multipel av 5 och 7")
import sys
exit()