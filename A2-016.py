# char and num is winning lottery, charB and numB is the lottery that we bought
char,num = input().split()
charB,numB = input().split()
prize = 0
if char == charB:
    if num[4] == numB[4] and num[3] == numB[3]:

        if num[2] == numB[2]:
            prize = 2000
            if num == numB:
                prize = 1000000
        else:
            prize = 1000
    else:
        prize = 20
else:
    if num[4] == numB[4] and num[3] == numB[3]:
        if num[2] == numB[2]:
            prize = 200
            if num == numB:
                prize = 100000
        else:
            prize = 100
print(prize)