a, b, c = map(int, input().split())

ans = 0

while True:
    if ans > 999999:
        print(-1)
        break
    elif a % 2 != 0 or b % 2 != 0 or c % 2 != 0:
        print(ans)
        break
    a, b, c =  (b+c) // 2, (a+c) // 2, (a+b) // 2
    ans += 1
