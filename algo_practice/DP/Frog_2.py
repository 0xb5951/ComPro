import numpy as np

N, K = map(int, input().split())
places = np.array(list(map(int, input().split())))
dp_table = np.zeros(N+1, dtype=np.int)

for i in range(1, N):
    start = max(0, i-K)
    dp_table[i] = min(dp_table[start:i] + np.abs(places[i]-places[start:i]))

print(dp_table[N-1])
