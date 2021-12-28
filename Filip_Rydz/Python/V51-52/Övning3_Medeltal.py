 # deklarerar en list "list" utan innehåll och utan förbestämt antal element
nummer = []
# sum behöver initieras med 0
sum = 0 
# tilldelar 'i' en int med input("medelande")
i = int(input("Ange hur många siffror som skall anges: "))
# range(i) dvs loopar lika många gånger som värdet av i
for x in range(i):
    # tilldelar 'a' en int med input
    a = int(input("Skriv in ett heltal: ")) 
    # med append läggs 'a' i slutet på listan
    nummer.append(a) 
    # summerar varje nytt värde med sum
    sum = sum + a 
# räknar ut medeltal genom att dela summan av alla värdena med antalet objekt i listan 'i'
medeltal = sum / i 
# omvandlar medeltal från int till float
float(medeltal) 

print("Medeltalet av numrena är: ", medeltal)