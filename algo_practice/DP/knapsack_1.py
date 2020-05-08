import sys
input = sys.stdin.readline
import numpy as np

N, W = map(int, input().split())

dp = np.zeros([N+1,W+1],dtype=int)

# 重かったので却下 : 2107mx
# for i in range(N):
#     weight,value = map(int, input().split())
#     for sum_w in range(W+1):
#         if sum_w - weight >=  0:
#             dp[i+1][sum_w] = max(dp[i][sum_w], dp[i][sum_w - weight] + value)
#         dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w])

# これでやると早い : 234ms
for i in range(N):
    weight, value = map(int, input().split())
    dp[i+1] = dp[i]
    dp[i+1, weight:] = np.maximum(dp[i+1, weight:], dp[i, :W-weight+1] + value)

print(dp[N][W])
