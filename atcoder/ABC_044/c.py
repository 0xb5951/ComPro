import itertools

n, avg = list(map(int, input().split()))
nums = list(map(int, input().split()))

pattern_num = 0

s_nums = sorted(nums)

for use_num in range(1, n+1):
    for pair in itertools.combinations(s_nums, use_num):
        this_sum = sum(pair)
        if this_sum / use_num == avg:
            pattern_num += 1

print(pattern_num)