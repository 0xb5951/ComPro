S = input()

al_list = [chr(i) for i in range(97, 97+26)]
s_list = []
Flag = True

for al in S:
    s_list.append(al)

if set(s_list) == set(al_list):
    print('None')
else:
    print(min(list(set(al_list) - set(s_list))))