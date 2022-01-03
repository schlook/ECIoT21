print("How many times do you wish to loop? ") 
number_of_times = int(input())

total_sum = 0   # Totala summan tilldelas 0

for i in range(number_of_times):
    print("Write a number : ", end="")
    number = int(input())   # Loopar för antalet gånger användaren ville köra
    
    total_sum = total_sum + number # Plussas på i totalen!
    
median = total_sum/number_of_times # medelvärde = summan av värdena / antalet värden

print("The median is : ", median)  # Printar medianen