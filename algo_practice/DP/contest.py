import sys
input = sys.stdin.readline
import numpy as np

N = int(input())
points = list(map(int, input().split()))

# カウントではなく、実現できるかを入力するみたい
# for i in range(N):
#     for j in range(1, sum(points)+1):
#         dp[i+1][j] = max(dp[i][j], dp[i][j-1])
#         if [j-k for k in points[:i]] >= 0:
#             dp[i+1][j] = max(dp[i][j], dp[i][j - 1] + 1)

# i問目までの問題を使って、j点の合計点ができるか（bool値）
DP = []
# 0問目は1問も問題を解いていない状態とする。N問あるので、DP[N]まで必要
for i in range(N+1):
    # N=100かつすべてのPが100点だった場合、
    # 合計の最大値は100*100点になる（0点の場合もあるので配列のサイズは100*100+1）
    a = [False] * (100 * 101)
    DP.append(a)

# 0問目までの問題を使って（=問題を一問も解かない）0点を取ることができる。
# また、それ以外の点数にはならないため、DP[0][0]以外のDP[0]の配列の値はFalseになる。
DP[0][0] = True

# 1問目からN問目までのループ
for i in range(1, N+1):
    # DP[i]に値を入れていくために、DP[i-1]の状態を見ていく
    for j, dpj in enumerate(DP[i-1]):
        if dpj is True:
            # i問目の問題を解かない
            DP[i][j] = True

            # i問目の問題を解く
            # i問目の得点はP[i-1]で表される
            DP[i][j+points[i-1]] = True

ans = 0
# DP[N]の配列を見て、Trueになっているところがありうる合計点
for dpi in DP[N]:
    if dpi is True:
        ans += 1
print(ans)