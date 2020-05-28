# 奇数行目は(W/2)+1. 偶数行目は(W/2)+1
H, W = map(int, input().split())
block_num = H*W

if H == 1 or W == 1:
    print(1)
elif block_num % 2 == 0:
    print(int(block_num/2))
else:
    print(int(block_num/2+1))