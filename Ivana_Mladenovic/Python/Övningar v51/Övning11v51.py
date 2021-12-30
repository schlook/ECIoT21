"""
Övningsuppgift 11
Skriv ett program för att visa alla heltal inom intervallet 100-200 vars siffror är ett jämnt tal
"""
#for-loop loppar från 100-199
for x in range(100, 200):
    summa=0
    # tal får nytt värde av x för varje varv
    tal=x
    # så länge tal inte blir 0
    while tal !=0:
        summa = summa + (tal % 10)
        tal = tal//10 # delar med 10 och avrundar neråt
    # om summa delat på 2 inte får någon rest då har talets siffror jämnt värde och då skrivs talet ut
    if (summa % 2 == 0):
        print(x)