n,m = input().split()
n,m = int(n),int(m)
rabbit_x,rabbit_y = input().split()
rabbit_x,rabbit_y = int(rabbit_x), int(rabbit_y)
rabbit_coordinate = [rabbit_x,rabbit_y]

N = int(input())
infected_coordinate_list = []
_60_percent_coordinate = []
_20_percent_coordinate = []
for i in range(N):
    x,y = input().split()
    x,y = int(x),int(y)
    coordinate = [x,y]
    infected_coordinate_list.append(coordinate)
for i in range(len(infected_coordinate_list)):
    coordinate = infected_coordinate_list[i]
    coordinate_x, coordinate_y = coordinate[0], coordinate[1]
    _60_list = [
        [coordinate_x-1, coordinate_y-1],
        [coordinate_x-1, coordinate_y],
        [coordinate_x-1, coordinate_y+1],

        [coordinate_x, coordinate_y-1],
        [coordinate_x, coordinate_y+1],

        [coordinate_x+1, coordinate_y-1],
        [coordinate_x+1, coordinate_y],
        [coordinate_x+1, coordinate_y+1]
    ]
    _20_list = [
        [coordinate_x-2, coordinate_y-2],
        [coordinate_x-2, coordinate_y-1],
        [coordinate_x-2, coordinate_y],
        [coordinate_x-2, coordinate_y+1],
        [coordinate_x-2, coordinate_y+2],
        
        [coordinate_x-1, coordinate_y-2],
        [coordinate_x-1, coordinate_y+2],

        [coordinate_x, coordinate_y-2],
        [coordinate_x, coordinate_y+2],

        [coordinate_x+1, coordinate_y-2],
        [coordinate_x+1, coordinate_y+2],

        [coordinate_x+2, coordinate_y-2],
        [coordinate_x+2, coordinate_y-1],
        [coordinate_x+2, coordinate_y],
        [coordinate_x+2, coordinate_y+1],
        [coordinate_x+2, coordinate_y+2],
    ]
    to_pop = []
    for i in range(len(_60_list)):
        x,y = _60_list[i][0], _60_list[i][1]
        if x > n or y > m:
            to_pop.append(_60_list[i])
    _60_list = [x for x in _60_list if x not in to_pop]
    to_pop.clear()

    for i in range(len(_20_list)):
        x,y = _20_list[i][0], _20_list[i][1]
        if (x > n or x<0) or (y > m or y<0):
            to_pop.append(_20_list[i])
    _20_list = [x for x in _20_list if x not in to_pop]
    _60_percent_coordinate.extend(_60_list)
    _20_percent_coordinate.extend(_20_list)

to_pop_big = []
for i in range(len(_20_percent_coordinate)):
    if _20_percent_coordinate[i] in _60_percent_coordinate:
        to_pop_big.append(_20_percent_coordinate[i])
_20_percent_coordinate = [x for x in _20_percent_coordinate if x not in to_pop_big]

safe_spot = 0
percent = 0
for x in range(n):
    for y in range(m):
        coordinate = [x,y]
        if not coordinate in infected_coordinate_list and not coordinate in _60_percent_coordinate and not coordinate in _20_percent_coordinate:
            safe_spot += 1
print(safe_spot)
if rabbit_coordinate in infected_coordinate_list:
    percent = 100
elif rabbit_coordinate in _60_percent_coordinate:
    percent = 60
elif rabbit_coordinate in _20_percent_coordinate:
    percent = 20
print(str(percent)+"%")