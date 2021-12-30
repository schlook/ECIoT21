"""
Övningsuppgift 1
Skriv ett program som kontrollerar om ett nummer är udda eller jämt (måste inte upprepa sig)
Programmet skall fråga användaren efter ett nummer och sedan ska programmet ta reda på om det 
är udda eller inte
"""
import sys # för exit
# initierar variabeln tal via input
# måste ange inputens datatyp, här int
tal = int(input("Ange ett nummer: "))
if (tal % 2 == 0): 
  print(tal, "är jämnt")
else:
  print(tal, "är udda")
exit()#avslutar programmet