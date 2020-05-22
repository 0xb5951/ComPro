N = int(input())

h_point = list(map(int, input().split()))

h_max = max(h_point)
h_min = min(h_point)

ans = h_max - h_min
print(ans)
