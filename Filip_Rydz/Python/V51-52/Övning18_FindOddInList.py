'''Program räknar de udda talen i en fältvariabel och skriver ut resultatet'''

# deklarerar en lista med nummer
list = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55]
# antal udda som itererar var gån ett udda på träffats
udda = 0
# loopar igenom listan
for x in list:
    # kontrollerar om talet INTE går att dela jämt på 2
    if x % 2 != 0:
        udda += 1 # varje gång ökar udda med 1
print("Antal udda tal i listan är:", udda)