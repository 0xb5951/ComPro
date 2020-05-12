import sys
input = sys.stdin.readline

inputs = list(map(int, input().split()))

if inputs[0] == inputs[1] and inputs[1] == inputs[2]:
    print(1)
elif inputs[0] == inputs[1] or inputs[1] == inputs[2] or inputs[0] == inputs[2]:
    print(2)
else:
    print(3)

