import numpy as np
b_card = [list(map(int, input().split())) for _ in range(3)]
N = int(input())
nums = [int(input()) for _ in range(N)]

card_st = np.zeros((3, 3))

for num in nums:
    for index, card_num in enumerate(b_card):
        if num in card_num:
            card_st[index][card_num.index(num)] = 1

if True in np.all(card_st, axis=0):
    print('Yes')
elif True in np.all(card_st, axis=1):
    print('Yes')
elif np.all(np.diag(card_st) == 1):
    print('Yes')
elif np.all(np.diag(np.fliplr(card_st)) == 1):
    print('Yes')
else:
    print('No')