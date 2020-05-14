import sys
input = sys.stdin.readline

values = list(map(int, input().split()))

if (values[0] + values[1]) == values[2] or (values[1] + values[2]) == values[0] or (values[0] + values[2]) == values[1]:
    print('Yes')
else:
    print('No')