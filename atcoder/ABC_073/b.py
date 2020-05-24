N = int(input())

c_list = [list(map(int, input().split())) for _ in range(N)]

ans = 0
for cs in c_list:
    ans += abs((cs[1]+1) - cs[0])

print(ans)