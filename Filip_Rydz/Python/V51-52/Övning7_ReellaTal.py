# produkten är initierad med 1 då den ska multipliceras med samtliga tal, 0 hade gett 0
produkt = 1
# reella tal dvs de tal vi vanligt vis menar när vi pratar om tal, inte komplexa tal
i = int(input("Ange antal reella tal: ")) 
# loopar lika många gånger som i
for x in range(i):
    # tilldelar 'tal' en float från input
    tal = float(input("Ange ett reellt tal: "))
    # multiplicera produkten med tal
    produkt = produkt * tal

print("Produkten av talen är", produkt)