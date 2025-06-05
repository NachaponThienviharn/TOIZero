P1 = str(input())
P2 = str(input())
love = ['l','o','v','e','L','O','V','E']
output = ''
def AddLetter(x,goal):
    tmp = x
    for i in range(len(x)):
        if len(tmp) != goal:
            tmp += x[i]
    return tmp
if len(P1) > len(P2):
    P2 = AddLetter(P2,len(P1))
elif len(P2) > len(P1):
    P1 = AddLetter(P1,len(P2))

for i in range(len(P1)):
    if P1[i] in love or P2[i] in love:
        if output == '':
            output = 'w'
        else:
            output += 'w'
    else:
        output += '$'
wCount = 0
for i in range(len(output)):
    if output[i] == 'w':
        wCount += 1
if wCount%2 != 0:
    wNext = []
    wNextCount = 0
    for i in range(len(output)):
        if output[i] == 'w':
            if i != len(output)-1:
                if output[i+1] == 'w':
                    wNextCount += 1
        else:
            if wNextCount != 0:
                wNext.append(wNextCount+1)
                wNextCount = 0
    if wNextCount != 0:
        wNext.append(wNextCount+1)
        wNextCount = 0
    if len(wNext) > 0:
        output += str(max(wNext))
    else:
        output += '1'
elif wCount%2 == 0:
    wNext = []
    wNextCount = 0
    for i in range(len(output)):
        if output[i] == 'w':
            if i != len(output)-1:
                if output[i+1] == 'w':
                    wNextCount += 1
        else:
            if wNextCount != 0:
                wNext.append(wNextCount+1)
                wNextCount = 0
    if wNextCount != 0:
        wNext.append(wNextCount+1)
        wNextCount = 0
    if len(wNext) == 0:
        output += '#'
                
print(output)