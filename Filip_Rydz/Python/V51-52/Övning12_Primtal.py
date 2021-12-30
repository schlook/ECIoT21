import math # för att vi använder math.sqrt()
# ber om ett tal
tal = int(input("Ange ett heltal: "))
# för att räkna ut om ett tal är ett primtal dividerar vi det med alla hela tal, från 2 
# tom det som är närmast < eller = (kvadratroten)tal. Om någon divisionsrest blir 0 är 
# talet INTE ett primtal. 
min = 2
max = math.sqrt(tal) # kvadratroten ur tal
# om vi får en divisionrest på 0, kommer kontroll att + 1
kontroll = 0
# loopa från 2 och + 1 för varje gång tills vi når (kvadratrot)tal
while min <= max:
    # modulus kontrollerar rest, 0 = sant dvs om divisionsrest blir 0, itererar kontroll
    if tal % min == 0: # här är 0 en boolean
        kontroll += 1
    min += 1
# om det påvisats 1 eller fler där divisionsrest = 0 är det inte ett primtal
if kontroll > 0:
    print(tal, "är inte ett heltal")
# och om talet varit 0 eller 1 är det heller inget primtal
elif tal == 0 or tal == 1:
    print(tal, "är inte ett heltal")
# övriga är primtal
else:
    print(tal, "är ett heltal")