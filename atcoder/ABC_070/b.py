A, B, C, D = map(int, input().split())


ans = min([B, D]) - max([A, C]) 
if ans <= 0:
    print(0)
else:
    print(ans)
