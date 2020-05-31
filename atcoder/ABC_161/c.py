N, K = map(int, input().split())
ans = 9999999

temp_c = N % K

if temp_c < K:
    ans = min([temp_c, abs(K-temp_c)])

print(ans)