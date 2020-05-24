N = int(input())
K = int(input())
balls = list(map(int, input().split()))

ans = 0
for ball in balls:
    if (ball) < abs(K - ball):
        ans += ball * 2
    else:
        ans += abs(K-ball) *2

print(ans)