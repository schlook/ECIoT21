import math # importerat math bibliotek
# användaren anger triangelns sidor
a=int(input("Ange längden på sida a: "))
b=int(input("Ange längden på sida b: "))
c=int(input("Ange längden på sida c: "))
# räknar ut arean
summa=(a+b+c)/2
area=float(math.sqrt(summa*(summa-a)*(summa-b)*(summa-c)))
print("Arean på triangeln är: ", area)