import numpy as np
N = int(input())
num_list = list(map(int, input().split()))

# ans = np.prod(num_list)
ans = num_list[0]
for i in range(1, N):
    if ans > 10**18:
        break
    ans *= num_list[i]


if 0  in num_list:
    print(0)
elif ans > 10**18:
    print("-1")
else:
    print(ans)