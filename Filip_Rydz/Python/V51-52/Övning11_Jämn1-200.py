# loopar, range(start, stop)
for x in range(100, 200):
    sum = 0 # tilldelar sum 0
    tal = x # börjar på 100 och slutar på 200

    # while-loopen summerar siffrorna i talet
    while tal != 0: # så länge inte tal reducerats till 0 körs while
        sum += tal % 10 # fokuserar på sista siffran i talet och adderar det med sum
        tal = tal // 10 # reducerar sista siffran ut tal

    if sum % 2 == 0: # kontroll, om sum är jämnt, skrivs x ut. dvs grundtalet vars summan av siffrorna är jämna
        print(x)