'''Programmet fyller en lista med nummer för att slutligen skriva ut summan av samtliga nummer'''

# skapar en, just nu, tom lista
list = []
# input om antal nummer eller element som ska stoppas in i listan
i = int(input("Hur många nummer vill du ange: "))
# sum är summan av samtliga nummer i listan
sum = 0
# loopar lika många gånger som nummer vi vill lägga in, = range(i)
for x in range(i):
    # n = input
    n = int(input("Ange ett nummer: "))
    # med append lägger vi in varje nytt nummer längst bak
    list.append(n)
# går igenom listan och adderar nummer för nummer med sum
for x in list:
    sum += x # sum = sum + x

print("Summan av nummrena i listan är:", sum)