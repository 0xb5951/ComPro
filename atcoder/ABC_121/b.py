import numpy as np
N, M, C = map(int, input().split())
b_inputs = np.array(list(map(int, input().split())))

a_inputs = [np.array(list(map(int, input().split()))) for _ in range(N)]

ans = 0
for i in range(N):
    if sum(a_inputs[i] * b_inputs) + C > 0:
        ans += 1

print(ans)