import sys
input = sys.stdin.readline
import numpy as np

W, H, N = map(int, input().split())

inputs = [input().split() for i in range(N)]


print(inputs)

maps = np.zeros([H+1, W+1])

for this_order in inputs:
    print(this_order)
    print(maps)
    if this_order[2] == 1:
        maps[0:][:this_order[0]] = 1
    elif this_order[2] == 2:
        maps[0:][this_order[0]:] = 1
    elif this_order[2] == 3:
        maps[:this_order[1]] = [1] * (W+1)
    else:
        maps[this_order[1]:] = [1] * (W+1)

ans = 0
for i in range(1, H+1):
    for j in range(1, W+1):
        if maps[i][j] == 0:
            ans += 1

print(ans)