import math

radie = float(input("Vad är radien? : "))

omkrets = (2 * math.pi * radie) # O = 2πr

area = (math.pi * math.pow(radie,2)) # Area = π⋅r2 

print("Omkrets på cirkeln är ca :","{:.2f}".format(omkrets))
print("Arean på cirkeln är ca :", "{:.2f}".format(area)) # Formaterar utskrift så det inte blir för mycket decimaler.