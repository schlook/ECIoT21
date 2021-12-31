'''Programet som tar bort ett element från en lista efter index'''

# definierar en lista med nummmer
list = [3, 4, 2, 9, 6, 2, 8]
print(list)
# ber om numret som önskas ta bort, skulle lika väl gått att be om index istället
n = int(input("Vilket nummer vill du ta bort: "))

# ta reda på vilket index numret är
pos = list.index(n)
# pop() tar bort önskat fält
list.pop(pos)

print(list)