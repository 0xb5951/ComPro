A, B, C = map(int, input().split())
Flag = False

c_temp = 0
for i in range(10000):
    c_temp = (B * i) + C
    if (c_temp % A) == 0:
        Flag = True

if Flag is True:
    print('YES')
else:
    print('NO')
