N, M = map(int, input().split())

roads = [ list(map(int, input().split())) for _ in range(M)]

maps = [0 for _ in range(N+1)]

for road in roads:
    maps[road[0]] += 1
    maps[road[1]] += 1

for i in range(1, N+1):
    print(maps[i])
