N, A, B = map(int, input().split())
S = input()

pass_user_num = 0
f_pass_user_num = 0

for index, user in enumerate(S):
    if user == 'a' and pass_user_num < (A+B):
        print('Yes')
        pass_user_num += 1
    elif user == 'b' and pass_user_num < (A+B) and f_pass_user_num < B:
        print('Yes')
        pass_user_num += 1
        f_pass_user_num += 1
    else:
        print('No')
