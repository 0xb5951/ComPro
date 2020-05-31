import itertools
import numpy as np

N = int(input())
points = np.array(list(map(int, input().split())))
ans = 0
s_points = sorted(points)

ans = s_points[int(N/2)] - s_points[int(N/2)-1]

print(ans)