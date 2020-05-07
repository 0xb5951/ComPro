N = int(input())
values_list = []
for i in range(N):
    values = list(map(int, input().split()))
    values_list.append(values)

# DPテーブルは選択分拡張する
dp = [[0,0,0] for i in range(N+1)]

for i in range(N):
    for j in range(0, 3):
        for k in range(0, 3):
            if j == k:
                continue
            dp[i][k] = max(dp[i][k], dp[i-1][j] + values_list[i][k])

print(max(dp[N-1]))
