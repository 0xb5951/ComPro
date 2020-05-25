N = int(input())

ans = 0
for i in range(1, N + 1):
    if int(i*1.08) == N:
        ans = i
        break

if ans != 0:
    print(ans)
else:
    print(":(")