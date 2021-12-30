# be om maxtal för intervall
intervall = int(input("Ange område: "))
# loopar igenom intervall
for num in range(intervall):  
    # om mer än 1, 0 och 1 är inga primtal
    if num > 1: 
        # loopar start på 2 och upp till samma värde som num 
        for i in range(2, num): # range(start, stop) 
            # om num går att dela jämnt ut med start från 2 uppåt är det INTE ett primtal
            if (num % i) == 0:  
                break  
        else: # om det inte får att dela jämnt med annat än sig själv är det Primtal
            print(num)  