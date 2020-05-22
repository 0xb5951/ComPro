N, K = map(int, input().split())

loops = list(map(int, input().split()))

loops.sort(reverse=True)

ans = sum(loops[:K])
print(ans)