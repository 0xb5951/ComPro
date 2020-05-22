words = input()
Flag = True

c_dict = {}

for word in words:
    if word in c_dict:
        Flag = False
        break
    c_dict[word] = 1

if Flag is True:
    print('yes')
else:
    print('no')
