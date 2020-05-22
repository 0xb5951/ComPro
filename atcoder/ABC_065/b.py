N = int(input())

buttons = [int(input()) for _ in range(N)]
m_dict = {}
index = 1
flag = True

while True:
    if index-1 in m_dict:
        flag = False
        break
    elif index == 2:
        break
    m_dict[index-1] = 1
    index = buttons[index-1]

if flag is True:
    print(len(m_dict))
else:
    print(-1)