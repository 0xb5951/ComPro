import itertools
import numpy as np
N = int(input())
z_list = []
ans = 0

def prime_factorize(n):
    a = []
    while n % 2 == 0:
        a.append(2)
        n //= 2
    f = 3
    while f * f <= n:
        if n % f == 0:
            a.append(f)
            n //= f
        else:
            f += 2
    if n != 1:
        a.append(n)
    return a
temp_list = []
prime_list = prime_factorize(N)
if len(prime_list) == 1:
    print(1)
    exit()

for i in range(1, int(len(prime_list)/2)):
    for v in itertools.combinations(prime_list, i):
        temp_list.append(np.prod(v))

ans_list = list(set(temp_list))

for z in sorted(ans_list):
    if z not in z_list and N % z == 0:
        ans += 1
        N /= z
        z_list.append(z)

print(ans)