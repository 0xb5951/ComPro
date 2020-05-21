N, M = map(int, input().split())

students = [list(map(int, input().split())) for _ in range(N)]
t_points = [list(map(int, input().split())) for _ in range(M)]

ans_list = []

for s_point in students:
    # 各学生に対して、マンハッタン距離を計算
    min_mhd = 9999999999
    p_index = 0
    for index, t_point in enumerate(t_points):
        temp_mhd = abs(s_point[0] - t_point[0]) + abs(s_point[1] - t_point[1])
        if min_mhd > temp_mhd:
            min_mhd = temp_mhd
            p_index = index
    ans_list.append(p_index+1)

for ans in ans_list:
    print(ans)
