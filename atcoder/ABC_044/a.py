
inputs = [int(input()) for i in range(4)]

use_num = inputs[0]
sell_start_num = inputs[1]
basic_price = inputs[2]
sell_price = inputs[3]
price_sum = 0

for i in range(use_num):
    if i >= sell_start_num:
        price_sum += sell_price
    else:
        price_sum += basic_price

print(price_sum)
