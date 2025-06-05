BubbleType,Bcal = ['H','O','J'],[5,3,2]
SweetR,SweetT,SweetM = [12,18,25],[15,20,30],[10,15,20]
bt,w = input().split()
tt,sn,cc = input().split()
w,sn,cc = int(w),int(sn),int(cc)
Ttcal = 0
def findI(x,y):
    for i in range(len(y)):
        if y[i] == x:
            return i
if tt == 'T':
    Ttcal += SweetT[sn-1]*cc
elif tt == 'R':
    Ttcal += SweetR[sn-1]*cc
elif tt == 'M':
    Ttcal += SweetM[sn-1]*cc
Ttcal += w*Bcal[findI(bt,BubbleType)]
print(Ttcal)