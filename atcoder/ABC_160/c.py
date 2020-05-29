# K, N = map(int, input().split())
# points = list(map(int, input().split()))

# s_sum = max(points) - min(points)
# e_sum = abs(points[-1] - max(map(lambda x: x+K, points[:-1])))

# print(min([s_sum, e_sum]))

# 解けなかった

K, N = map(int, input().split())
points = list(map(int, input().split()))
l = 0

points.append(points[0]+K) # ループの辺間距離を計算するため
for i in range(N+1):
    l = max([l, points[i] - points[i-1]])

ans = K - l
print(ans)