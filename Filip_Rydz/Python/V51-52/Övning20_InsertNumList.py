'''Programet infogar ett nummer på önskad plats i en lista'''

# definierar en lista med nummmer
list = [3, 4, 2, 9, 6, 2, 8]
# definierar en funktion för att placera ett nummer på önskad plats i listan, rekursiv
def pos():
    p = int(input("Ange positionen: "))
    # om önskad position är mer än vad som finns i listan får man börja om
    if p > len(list): # len(list) = antalet fält
        print("Så många element finns inte i listan!")
        pos()
    else: # annars sätt nummer in på önskad plats, list.insert(position, nummer)    
        list.insert(p, n)

print(list)
# först vilket nummer man vill lägga till
n = int(input("Ange numret som ska infogas: "))
# funktion för att placera i listan
pos()

print(list)