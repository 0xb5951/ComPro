# 入力を受け取る
list_num = int(input())
places = list(map(int, input().split()))

# すべてをINFで初期化
dp_table = [99999999] * (list_num+1)

# 初期条件の作成
dp_table[0] = 0
dp_table[1] = abs(places[1] - places[0])


for i in range(2, list_num):
    dp_table_pre_1 = dp_table[i-1] + abs(places[i] - places[i-1])
    dp_table_pre_2 = dp_table[i-2] + abs(places[i] - places[i-2])
    dp_table[i] = min(dp_table_pre_1, dp_table_pre_2)

print(dp_table[list_num-1])
