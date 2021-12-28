tal = int(input("Ange ett heltal: "))
# om tal är delbart med 5 OCH 7, här används 'and' istället för &&, == 0 om det är sant
if tal % 5 == 0 and tal % 7 == 0:
    print(tal, "är en multipel av 5 och 7.")
else:
    print(tal, "är inte en multipel av 5 och 7.")