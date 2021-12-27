import sys # för exit
# initierar variabeln tal via input
# måste ange inputens datatyp, här int
tal = int(input("Ange ett nummer: "))
if (tal % 2 == 0): 
  print(tal, "är jämnt")
else:
  print(tal, "är udda")
exit()#avslutar programmet