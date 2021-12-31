'''Programet hittar det största talet i en fältvariabel, och skriver ut i vilket fält den var'''
# listan med olika nummer, blandad ordning
list = [13, 2, 1, 0, 1, 34, 3, 8, 55, 5, 21]
# med max(list) får vi fram det högsta numret, och index vilken plats den låg på
print("Det störta talet:", max(list), "hittades i fält:", list.index(max(list)))
# med min(list) får vi fram det lägsta numret
print("Det lägsta talet:", min(list), "hittades i fält:", list.index(min(list)))