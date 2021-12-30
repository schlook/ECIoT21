"""
Övningsuppgift 3
Skriv ett program som hitta medeltalet av siffror
Ställ en fråga om att ange antal nummer eller loopa igenom tills användaren trycker på mellanslag 
eller liknande.
När användaren skrivit klart numren, visa medelvärdet av alla tal.
"""
antal=int(input("Ange hur många siffror som ska anges: "))
summa=0
# med funktionen range() loopas koden igenom ett antal ggr, här det värde i variabel antal
for x in range(antal):
    tal=int(input("Ange ett heltal: "))
    # för varje varv adderas nytt tal till summan
    summa=summa+tal
medel=summa/antal
# printar ut medelvärdet
print("Medeltalet är: ",medel)
