import sys
input = sys.stdin.readline
import numpy as np

A, B, C, K= map(int, input().split())
ans = 0

if A < K:
    ans += A
    K -= A
else:
    ans += K
    K -= K
    
if (K != 0) and (B < K):
    K -= B
else:
    K -= K

if (K != 0) and (C < K):
    K -= C
    K -= C
else:
    ans -= K
    K -= K

print(ans)