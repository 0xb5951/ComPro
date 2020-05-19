A, B, X = map(int, input().split())

# 解けなかった
# ans = 0
# temp_A = 0
# temp_B = 0
# for i in range(B, A-1, -1):
#     if i % X == 0:
#         temp_B = i
#         break

# for i in range(A-1, 0, -1):
#     if i % X == 0:
#         temp_A = i
#         break

# if temp_A != 0:
#     ans_a = temp_A / X
# else:
#     ans_a = 0

# if temp_B != 0:
#     ans_b = temp_B / X
# else:
#     ans_b = 0

# ans = ans_b - ans_a

# if X == 1:
#     ans = B+1

# 切り捨て除算を使えば上手くいく
# 割り算をして、小数点以下を捨てる方法
print((B//X) - ((A-1)//X))