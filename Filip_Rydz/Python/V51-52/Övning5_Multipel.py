tal = int(input("Ange ett heltal: "))
# om tal är delbart med 5, dvs går att dela utan rest
if tal % 5 == 0:
    print(tal, "är en multipel av 5.")
# om inte -> else
else:
    print(tal, "är inte en multipel av 5.")