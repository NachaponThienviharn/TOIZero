n,m = input().split()
n,m = int(n), int(m)
k = int(input())
_list_ = []
_can_spawn_ = []
_catch_ = []

def _range(coordinate):
    x = coordinate[0]
    y = coordinate[1]
    _range_table_ = [
        [x-1, y-1],
        [x-1,y],
        [x-1,y+1],
        [x,y-1],
        [x,y+1],
        [x+1,y-1],
        [x+1,y],
        [x+1,y+1]
    ]
    sum_caught = 0
    for i in range(len(_list_)):
        if _list_[i] in _range_table_:
            sum_caught +=1
    _catch_.append(sum_caught)

for i in range(k):
    x,y = input().split()
    x,y = int(x), int(y)
    _list_.append([x,y])
for x in range(n):
    for y in range(m):
        coordinate = [x,y]
        if not coordinate in _list_:
            _can_spawn_.append(coordinate)
for i in range(len(_can_spawn_)):
    _range(_can_spawn_[i])
print(max(_catch_))