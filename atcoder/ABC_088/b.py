N = int(input())
card_list = list(map(int, input().split()))

ali_sum = 0
bob_sum = 0

for index, card in enumerate(sorted(card_list)):
    if index % 2 == 1:
        ali_sum +=  card
    else:
        bob_sum += card

print(abs(ali_sum - bob_sum))