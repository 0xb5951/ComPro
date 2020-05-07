N = int(input())
count = 0

values = [1]
# 金額のパターンを設定
for i in range(1, 7):
    values.append(6**i)
    values.append(9**i)

values.sort()

# dpの初期化
dp =  [99999999] * (N+1)
dp[0] = 0

for i in range(1, N+1):
    for j in values:
        if i - j >= 0:
            dp[i] = min(dp[i], dp[i-j]+1)

print(dp[N])
