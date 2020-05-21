O = input()
E = input()

ans = ''

for i in range(len(E)):
    ans += O[i]
    ans += E[i]

if abs(len(O) - len(E)) != 0:
    ans += O[-1]

print(ans)