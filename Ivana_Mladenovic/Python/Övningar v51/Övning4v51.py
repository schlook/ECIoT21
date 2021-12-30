"""
Övningsuppgift 4
Importera math för enklare uträkning
math.pi har redan värdet av pi
Skriv ett program för att hitta omkretsen och arean av en cirkel med en given radie.
Fråga användaren efter radius av cirkeln
"""
r=float(input("Mata in cirkelns radie: "))
import math # för pi
omkrets=float(2*math.pi*r)# beräknar omkrets
area=float(math.pi*r*r)# beräknar area
print("Cirkelns omkrets är: ",omkrets)
print("Cirkelns area är: ",area)