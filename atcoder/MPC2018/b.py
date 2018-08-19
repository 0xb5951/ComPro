A = int(input())
S = input()

i = 0
flag = 0

if A == 0:
    flag = 1


for i in range(len(S)):
    if S[i] == '+':
        A += 1
    elif S[i] == '-':
        A -= 1

    if A == 0:
        flag = 1
        break

    i += 1

if flag:
    print('Yes')
else:
    print('No')
