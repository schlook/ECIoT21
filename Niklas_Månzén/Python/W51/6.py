print("Skriv ett heltal. Vi ska kolla om det är multipel med 5 & 7 :)")
siffran = int(input())

if (siffran % 5 == 0) and (siffran % 7 == 0):  # Kollar om den angivna siffran får en remainder 0 av modulus 5 OCH 7
    print("Heltalet", siffran , "är en multipel av 5 & 7!")
else:
    print("Heltalet", siffran, "är INTE en multipel av 5 & 7!") # Annars är siffran inte en multipel av 5 & 7