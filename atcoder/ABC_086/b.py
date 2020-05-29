A, B = map(str, input().split())
t_sum = int(A+B)
Flag = False

for i in range(1000):
    if i ** 2 == t_sum:
        Flag = True

if Flag is True:
    print('Yes')
else:
    print('No')