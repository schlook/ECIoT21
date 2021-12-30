"""
Övningsuppgift 5
Skriv ett program som kontrollerar om det givna heltal är en multipel av 5
Fråga efter ett tal och skriv sedan ut om numret är en multipel av 5, eller inte.
"""
tal=int(input("Ange ett heltal: "))
# om talet är delbar med 5
if (tal % 5 == 0):
    print(tal, "är en multipel av 5")
# annars
else:
    print(tal, "är inte en multipel av 5")
import sys
exit()