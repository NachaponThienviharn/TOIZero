x,y,z = input().split()
x,y,z = int(x),int(y),int(z)
cost = 0
price = [10,25,3]
cost = x*price[0]+y*price[1]+z*price[2]
print(cost)