"""
Övningsuppgift 8
Skriv ett program för att hitta hitta det geometriska medelvärdet av 'n' tal
Talen skall vara flyttal
Fråga användaren efter att ange antalet nummer.
"""
antal=int(input("Ange antalet värden: "))
medelv=1 # sätter värdet till 1 då det ej går att multiplicera med 0
# med funktionen range() loopas koden igenom ett antal ggr, här det värde i variabel antal
for x in range(antal):
    tal=float(input("Ange ett flyttal: "))
    # för varje varv multipliceras ett nytt tal till variabeln medelv
    medelv=medelv*tal
import math
#n=float(math.pow(medelv, 1/antal))
n=float(medelv**(1/antal))
# printar ut det geometriska medelvärdet
print("Det geometriska medelvärdet är: ",n)
