inputs = str(input())
ans = ""

for i in inputs:
    if i == 'B':
        ans = ans[:-1]
    else:
        ans += i

print(ans)