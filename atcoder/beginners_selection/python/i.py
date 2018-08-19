N, Y = map(int, input().split())

flag = 1

def ans():
    for i in range(N+1):
        for j in range(N+1-i):
            if i*10000+j*5000+(N-i-j)*1000 == Y:
                print("{0} {1} {2}".format(i,j,N-i-j))
                global flag
                flag = 0
                return

ans()

if flag:
    print('-1 -1 -1')
