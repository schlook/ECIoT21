"""
Övningsuppgift 14
Skriv ett program som tar emot ett tal från användare,
Skriv sedan ut siffrorna från ett numret 'n' till 0 med hjälp av en rekursion funktion.
"""
tal=int(input("Ange ett heltal: "))
# om inmatat tal är 0
if tal == 0:
    print(tal)# printar ut talet och programmet avslutas, while loopen körs inte pga villkor
# så länge tal inte är 0 kommer loopen köras
while tal != 0:
    # för varje varv minskar talet med 1 och skrivs ut
    tal = tal - 1
    print(tal)

"""
NIKLAS EXEMPEL

def skrivTillNoll(n):
    # kolla om n är noll
    if (n == 0):
        # om så är fallet avslutar vi funktionen
        return
    print(n)
    # n - 1  fram till noll
    n = n - 1
    skrivTillNoll(n)
# fråga användarem om ett tal
x = int(input("Ange ett heltal: "))
# första anrop av funktionen
skrivTillNoll(x)
"""

