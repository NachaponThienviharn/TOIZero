N = int(input())
a,b = 0,0
for i in range(N):
    x = int(input()) # amount of hour
    if x>18:
        a+=1
    else:
        b+=1
print(max(0,a-(b+1))+N)
