H, W = map(int, input().split())

base_word = [input() for _ in range(H)]

ans = ['#' * (W+2)]

for index, word in enumerate(base_word):
    ans.append("#{0}#".format(word))

ans.append('#' * (W+2))

for i in range(H+2):
    print(ans[i])