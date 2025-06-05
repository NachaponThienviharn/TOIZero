OrderShorted = ["R","G","B"]
Order = ["Red","Green","Blue"]
C,N = input().split()
N = int(N)
a = 0
def FindOrder(x):
    for i in range(len(OrderShorted)):
        if OrderShorted[i] == x:
            return i
a = FindOrder(C)
msg = ''
for i in range(N):
    if a > 2: a = 0
    if msg == '':
        msg = Order[a]
    else:
        msg += " "+Order[a]
    a += 1
print(msg)