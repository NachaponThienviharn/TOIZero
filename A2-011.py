list = []
cleared = []
list.extend(input().split())
msg = ""

for i in range(len(list)):
    list[i] = int(list[i])


for i in range(len(list)):
    if not list[i] in cleared:
        cleared.append(list[i])
for i in range(len(cleared)):
    if msg == "":
        msg = str(cleared[i])
    else:
        msg += " "+str(cleared[i])
print(msg)