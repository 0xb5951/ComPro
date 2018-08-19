N, A, B = map(int, input().split())

ans = 0

#数値を受け取り、各桁の和を求める.
def digitSum(n):
    s = str(n) #一文字ずつのリストにする。
    array = list(map(int, list(s))) #文字列を整数のリストに変換する。
    return sum(array)

for i in range(N+1):
    temp = digitSum(i)
    if A <= temp and temp <= B:
        ans += i

print(ans)
