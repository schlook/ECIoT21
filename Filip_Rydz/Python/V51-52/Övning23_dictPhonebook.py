'''Programmet genererar en telefonbok som med dict sparar namn, nummer och mailadress'''

# definierar en meny-funktion
def meny():
    print("\n1. Kolla upp")
    print("2. Lägga till")
    print("3. Skriv ut")
    print("4. Ta bort")
    print("0. Avsluta")

# deklarerar en dictionary
telefonbok = {}

while True:
    # anropar funktionen som tilldelar choice ett värde
    meny()
    choice = int(input("\nGör ett val: "))
    # sök efter specifikt namn i telefonboken
    if choice == 1:
        namn = str(input("Namn: "))
        if namn in telefonbok:
            print(telefonbok[namn])
        else:
            print("Namnet hittades inte i telefonboken.")
    # lägger till namn, nummer och mail
    elif choice == 2:
        namn = str(input("Namn: "))
        num = int(input("Nummer: "))
        mail = str(input("Mail: "))
        telefonbok[namn] = num, mail
    # skriver ut alla kontakter, k = namn, v = nummer och mail
    elif choice == 3:
        for k, v in telefonbok.items():
            print(k, ":", v)
    # tar bort kontaktuppgifter efter namn
    elif choice == 4:
        namn = str(input("Namn: "))
        if namn in telefonbok: # söker efter 'namn'et i dict. hittar så tas bort med del
            del telefonbok[namn]
        else:
            print("Namnet hittades inte i listan!")
    # choice 0 stänger programmet
    elif choice == 0:
        exit()
    # om annat än 0 tom 4 matas in..
    else:
        print("Fel inmatning")
