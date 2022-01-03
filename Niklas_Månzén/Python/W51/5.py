# En multipel är ett tal som kan divideras med ett annat tal ett antal gånger utan rest. Remainder. Modulus. %.

print("Skriv en siffra. Vi ska kolla om det är multipel med 5 :)")
siffran = int(input())

if (siffran % 5 == 0):  # Kollar om den angivna siffran får en remainder 0 av modulus 5
    print("Siffran", siffran , "är en multipel av 5!")
else:
    print("Siffran", siffran, "är INTE en multipel av 5!") # Annars är siffran inte en multipel av 5