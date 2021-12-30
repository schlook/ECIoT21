"""
Övningsuppgift 7
Skriv ett program som hittar produkten av en uppsättning reella tal.
Fråga användaren om att ange antalet reella tal
Loopa sedan ut antalen med ny fråga om att ange ett reellt tal
"""
antal=int(input("Ange antal reella tal: "))
produkt=1 # sätter värde till 1 då det ej går att multiplicera med 0 
# med funktionen range() loopas koden igenom ett antal ggr, här det värde i variabel antal
for x in range(antal):
    tal=float(input("Ange ett reellt tal: "))
    # för varje varv multipliceras ett nytt tal till variabeln produkt
    produkt=produkt*tal
# printar ut produkten
print("Produkten av numren är: ",produkt)
