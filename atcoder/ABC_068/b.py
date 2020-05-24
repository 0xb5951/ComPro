N = int(input())

# ans = 1
# mac_c = 0
# for i in range(2, N+1):
#     c_count = 0
#     temp_i = i
#     while True:
#         if temp_i % 2 != 0:
#             break
#         temp_i /= 2
#         c_count += 1
#     if mac_c <= c_count:
#         mac_c = c_count
#         ans = i

# 別解
# 100以内の数で2の累乗を求めればいい
ans_list = [2**i for i in range(7)]
ans = max([i for i in ans_list if N >= i])
print(ans)