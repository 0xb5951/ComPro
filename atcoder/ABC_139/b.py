A, B = map(int, input().split())

con_c = 1
ans = 0

while True:
    if con_c >= B:
        break
    ans += 1
    con_c += (A-1)

print(ans)