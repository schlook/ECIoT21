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
