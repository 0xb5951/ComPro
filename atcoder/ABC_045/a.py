import sys
input = sys.stdin.readline

inputs = [int(input()) for i in range(3)]

ans = ((int(inputs[0]) + int(inputs[1]))*int(inputs[2]))/2

print(int(ans))