import math # importerar bibliotektet math för att använda 'math.sqrt()'

a = int(input("Ange längden på sida a: ")) # int(input()), för inmatning, i det här fallet av en int
b = int(input("Ange längden på sida b: "))
c = int(input("Ange längden på sida c: "))
# ekvation för att räkna ut höjden, math.sqrt() returnerar roten ur ett tal
h = 0.5 * math.sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / b 
# Area = basen * höjden / 2
A = b * h / 2

print("Arean på triangeln är:", A)