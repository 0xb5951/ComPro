N = int(input())

regis = list(map(int, input().split()))

ans = 999999999
for i in range(-10, 200):
    hp_sum = 0
    for regi in regis:
        hp_sum += (regi - i)**2
    ans = min(ans , hp_sum)

print(ans)