# Produkt = faktor⋅faktor
"""
Exempel på reella tal är :
0, 1 (naturliga), 
1/2 (rationellt), 
√2 (irrationellt, algebraiskt), 
e, pi (irrationella och transcendenta).
[1] Reella tal som inte är rationella kallas irrationella tal.

"""
antalet_tal = int(input("Ange antalet av reella tal : "))

produkten = 1 # Saker bör inte multipliceras med 0!

for i in range(antalet_tal):
    reellt_tal = float(input("Ange ett reellt tal : ")) #användaren kan skriva in decimaler. 
    
    produkten *= reellt_tal     # Produkten ökas för varje loop som körs!

print("Produkten av faktorerna är :", produkten)