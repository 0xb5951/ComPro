import math
N = int(input())

ans = math.factorial(N)
ans %= 1000000007
print(ans)