a,b = map(int, input().split())

sum = a*b
if sum % 2 == 1:
    print('Odd')
else:
    print('Even')
