min = 10 # min intervall
max = 50 # max intervall
tal = 3 # talet som vi vill se om i är en multipel av
i = 10 # böjar på 10

print("Inom intervalet", min, "tom",max)
# i mellan intervallet 10 - 50
while i >= min and i <= max:
    # om i går att dela jämt ut med 3 är det en multipel
    if i % tal == 0:
        # och så skriv den i ut.
        print("är", i, "en multipel av 3")
    else:
        pass # om annat så går vi hit, just nu så kör vi pass dvs inget händer
    i = i + 1 # slutligen itererar vi i så att vi ökar på 1 tills max. dvs 50