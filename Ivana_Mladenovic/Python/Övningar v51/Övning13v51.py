"""
Övningsuppgift 13
Skriv ett program för att generera primtal från 1 till N
Fråga användaren efter ett heltal, därefter skall du från 1 till numret skriva ut alla primtal som kan 
finnas inom det spannet.
"""
tal=int(input("Ange ett område: "))
for i in range(1, tal):
    # kollar om x är inom range
    for x in range(2, i):
        # om  i delat på x inte har någon rest
        if i % x == 0:
            break # avbryter loopen
    # annars
    else:
        print(i)