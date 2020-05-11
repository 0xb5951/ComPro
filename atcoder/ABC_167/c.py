import sys
input = sys.stdin.readline
import itertools

# 解けなかった
# N, M, X = map(int, input().split())
# values_list = []
# for i in range(N):
#     values = list(map(int, input().split()))
#     values_list.append(values)

# ans = 0
# for i in range(1, N+1):
#     for pair in itertools.combinations(values_list, i):
#         this_m_dict = {}
#         this_cost = 0
#         for item in pair:
#             for j in range(1, M+1):
#                 this_m_dict[j] = this_m_dict.get(j, 0) + item[j]
#             this_cost += item[0]
#         for myvalue in this_m_dict.values():
#             if myvalue < X:
#                 break
#         ans = min(this_cost, ans)

N, M, X = map(int, input().split())
A = []
C = []

for i in range(N):
    values = list(map(int, input().split()))
    C.append(values[0])
    A.append(values[1:])

INF = float('INF')
min_cost = INF

def dfs(i, cost, learn):
    if i == N:
        if min(learn) >= X: 
            return cost
        else:
            return INF

    else:
        new_learn = [(x+y) for (x, y) in zip(A[i], learn)]
        cost = min(dfs(i+1, cost, learn), dfs(i+1, cost + C[i], new_learn))
        return cost

min_cost = dfs(0, 0, [0] * M)

if min_cost == INF:
    print(-1)
else:
    print(min_cost)