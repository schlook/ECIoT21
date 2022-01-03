print("Number please : ")
# Tilldelar the_number till input & Konverterar input till en int eftersom input läser det som en string
the_number = int(input()) 

if (the_number % 2 == 0):   # OM numret returnerar 0 efter en %2 så ÄR numret jämnt. Annars inte.
    print("Number is even")
else:
    print("Number is odd")
