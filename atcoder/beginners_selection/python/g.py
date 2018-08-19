N = int(input())
A = list(map(int, input().split()))
A.sort()

Alice = 0
Bob = 0

for i in range(N):
    if i%2 == 0:
        Alice += A.pop()
    else:
        Bob += A.pop()

print(abs(Alice - Bob))
