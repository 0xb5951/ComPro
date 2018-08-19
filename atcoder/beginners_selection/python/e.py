A, B, C = [int(input()) for i in range(3)]
x = int(input())

count = 0

for i in range(A+1):
    for j in range(B+1):
        for k in range(C+1):
            if x == 500*i + 100*j + 50*k:
                count += 1

print(count)
