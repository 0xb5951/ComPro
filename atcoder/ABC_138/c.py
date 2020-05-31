N = int(input())
v_list= list(map(int, input().split()))
v_list_s = sorted(v_list, reverse=True)

while True:
    if len(v_list_s) <= 1:
        break
    temp_c = (v_list_s[-1] + v_list_s[-2])/2
    v_list_s.remove(v_list_s[-1])
    v_list_s.remove(v_list_s[-1])
    v_list_s.append(temp_c)

print(sorted(v_list_s)[0])
