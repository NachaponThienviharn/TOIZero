R = [60,80,100]
T = [80,100, 120]
Size = ['S','M','L']
Cost = 0
S,typ = input().split()
def findOrder(a,Table):
    for i in range(len(Table)):
        if Table[i] == a:
            return i
if typ == 'R':
    if S in Size:
        Cost = R[findOrder(S,Size)]
elif typ == 'T':
    if S in Size:
        Cost = T[findOrder(S,Size)]

topping = []
TopPrice = [15,10]
Top = ['P','E']
topping.extend(input().split())
for i in range(len(topping)):
    if topping[i] == 'N':
        break
    else:
        if topping[i] in Top:
            if len(topping) > 1:
                Cost += TopPrice[findOrder(topping[i],Top)]*int(topping[i+1])
            else:
                Cost += TopPrice[findOrder(topping[i],Top)]
print(Cost)