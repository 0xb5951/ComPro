N = int(input())
p_num = list(map(int, input().split()))
ans_list = [0] * N

# for i in range(N):
#     ans_list[p_num[i] - 1] = i+1

# for i in range(N):
#     print(ans_list[i])

for i in range(1, N+1):
    min_p_index = p_num.index(i)+1
    print(min_p_index)