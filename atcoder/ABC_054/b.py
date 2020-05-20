N, M = map(int, input().split())

A_image = [input() for i in range(N)]
B_image = [input() for i in range(M)]
Flag = False

for i in range(N):
    for j in range(N): # 画像Aをすべてループ
        if i + M <= N and j + M <= N:
            temp = []
            for k in range(M):
                temp.append(A_image[i+k][j : j+M])
            if temp == B_image:
                Flag = True

if Flag is True:
    print('Yes')
else:
    print('No')

