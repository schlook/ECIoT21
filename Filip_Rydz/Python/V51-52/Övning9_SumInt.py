heltal = int(input("Ange ett heltal: "))

sum = 0
# körs tills heltalet reduceras till 0 genom heltal // 10
while (heltal != 0):
    # heltal % 10 fokuserar på sista siffran i talet, dvs sum = sum + (sista siffran i heltalet)
    sum += (heltal % 10) 
    # tar bort sista siffran genom att dela talet med 10, iom // bortprioriteras ev rest
    heltal = heltal//10 

print("Summan av nummerna blir: ", sum)