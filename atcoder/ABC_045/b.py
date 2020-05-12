# 解けなかった
# SA = str(input())
# SB = str(input())
# SC = str(input())

# value_dict = {
#     'a' : SA,
#     'b' : SB,
#     'c' : SC
# }
# print(value_dict.values())
# ans = ''

# def solve(user, list_dict):
#     for j in ['a', 'b', 'c']:
#         if len(list_dict[j])-1 <= 0 and user == j:
#             return 0
#     list_dict[user] = list_dict[user][1:]
#     next_user = list_dict[user][0]
#     ans = user
#     solve(next_user, list_dict)

a, b, c = input(), input(), input()
req = a
a = a[1:]
ans = ""

while 1:
    if req[:1] == 'a':
        ans = "A"
        req = a
        a = a[1:]
    elif req[:1] == 'b':
        ans = "B"
        req = b
        b = b[1:]
    else:
        ans = "C"
        req = c
        c = c[1:]

    if not req:
        break

print(ans)
