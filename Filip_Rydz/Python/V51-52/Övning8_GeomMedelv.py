import math
import time
import sys

# olika utskriftssträngar som används som argument vid anrop av funktionen 'utskrift'
str1 = "Du kommer nu att bli ombedd att ange antal år som du vill beräkna avkastningen på din aktie"
str2 = "Därefter ombeds du ange den årliga procentuella uppgång/nedgång av din aktie."
str3 = "Om din aktie stigit 30 % skrivs det = 1.30"
str4 = " och om din aktie sjunkit 30 % skrivs det = 0.7"
str5 = ", s.k. Geometriskt medelvärde."

# välkommst-funktionen
def välkommen():
    print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Välkommen till EC Investor!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n")
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Din aktiehandel på nätet!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n")

'''funktionen tar emot ett argument, dvs en sträng, och med while-loopen skriver den ut en bokstav i taget med 1 millesekunds
mellanrum. len() är storleken på strängen. sys.stdout.write() istället för print() för att den skriver ut text utan radbrytning'''
def utskrift(str):
    i = 0
    while i < len(str):
        sys.stdout.write(str[i])
        i += 1
        time.sleep(.1)

# skriver ut välkommsmedelandet och väntar i 2 sek innan den går vidare
välkommen()
time.sleep(2)

# while-loopen körs tills den bryts med break
while True:
    utskrift(str1) # anropar utskrifts-funktionen med 'str1' som argument
    time.sleep(.55) # väntar i 55 millesekunder
    utskrift(str5) # skriver ut resten av medelandet
    time.sleep(2)
    print(chr(27) + "[2J") # denna rensar terminalen
    välkommen() # skriver välkommen-medelandet igen
    utskrift(str2) # går vidare men utskriften av nästa sträng
    time.sleep(2)
    print(chr(27) + "[2J")
    välkommen()
    utskrift(str3)
    time.sleep(1)
    utskrift(str4)
    time.sleep(2)
    print(chr(27) + "[2J")
    välkommen()    
    # fråga om man önskar fortsätta och initierar val med input
    val = input("Har du förstått och önskar att fortsätta (J/N): ")
    if val.upper() == 'J': # konverterar inmatningen till storbokstav, om 'J' bryts loopen
        break
    # annars rensas terminalen och utskriften upprepas sig
    else:
        print(chr(27) + "[2J") 
        välkommen()

print(chr(27) + "[2J")
välkommen()
# antal år som eller antal floats man önskar mata in
i = int(input("Ange på hur ånga år som du vill beräkna avkastningen: "))
print("\n")
# för att kunna multiplicera aktieKurs med nästa aktieKurs sätts medelvärdet sätts till 1, 0 hade gett 0
medelvärde = 1
# range loopar igenom antalet 'i' dvs antal år man matat in
for x in range(i):
    # ber om en float, för år 1, år 2 osv. end = '' för att undvika radbrytning
    print("Ange den procentuella förändringen för år",x + 1,": ", end = '')
    # input, float för aktieKurs
    aktieKurs = float(input())
    # multiplicerar varje float med sig med nästa
    medelvärde = medelvärde * aktieKurs
# gMedel dvs geometrisk medelvärde
gMedel = math.pow(medelvärde, 1 / i)
# round(gMedel, 2) avrundar till 2 decimaler
print("\nDen ""faktiska"" avkastningen, dvs det geometriska medelvärdetden är:", round(gMedel, 2), "%")
# https://www.finansakademin.se/artiklar/aritmetisk-geometrisk-avkastning, https://sv.wikipedia.org/wiki/Geometriskt_medelv%C3%A4rde