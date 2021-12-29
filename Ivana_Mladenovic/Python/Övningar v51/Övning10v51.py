# ska loopa från 10-50
for x in range(10, 51):
    # om ett tal i intervallet 10-50 är multipel av 3, dvs det blir ingen rest när talet delas med 3
    if x % 3 == 0:
        # printar ut talet
        print(x)