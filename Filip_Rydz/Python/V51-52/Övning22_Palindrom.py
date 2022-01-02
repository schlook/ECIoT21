'''Programet kontrollerar om en sträng är en palindrom eller inte'''
# hämtar en sträng från input
str1 = str(input("Ange en sträng: "))
# konverterar sträng lowercase (små bokstav)
str1 = str1.casefold()
# str2 tilldelas str1 fast baklänges ([::-1])
str2 = str1[::-1]
# kontrollerar om str1 och str2 är lika
if str1 == str2:
    print(str1, "är en palindrom!")
else:
    print(str1, "är inte en palindrom!")