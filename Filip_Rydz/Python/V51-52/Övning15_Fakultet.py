'''Programmet räknar med hjälp av en rekursiv funktion ut fakulteten av ett inmatat nummer'''

# definierar en rekursiv funktion, dvs en funktion som kallar på sig själv
# funktionen tar emot ett heltal som argument och räknar ut fakulteten för heltalet
# för ett heltal större än 0 är fakulteten produkten av alla tal från 1 upp till talet självt
def rekursion(n):
    # rekursionen reducerar 'n' med 1 varje gång den kallas från else
    # och när 'n' är mindre än 2 avbryts reskursionen. 
    if n < 2:
        # 1 = True. Funktionen kallas inte längre på sig själv
        return 1 
    # så länge 'n' är mer än 2 anropas funktionen rekursivt
    else:
        # funktionen anropas, 'n' * med (n - 1). returnerar resultatet
        return (n * rekursion(n - 1))
 
n = int(input("Ange ett heltal: "))
# funktionen kallas och skriver ut fukulteten när rekursionen upphört
print("Fakulteten av", n, "är:", rekursion(n))