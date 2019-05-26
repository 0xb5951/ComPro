#include <stdio.h>

int main()
{
    int N, M;
    int K[12] = {0};
    int s[12][12] = {0};
    int p[12] = {0};
    int ans = 0;

    scanf("%d%d", &N, &M);

    for(int i = 0; i < M; i++) {
        scanf("%d", &K[i]);
        int tmp = 0;
        for (int j = 0; j < K[i]; j++)
        {
            scanf("%d", &tmp);
            s[i][tmp-1] = 1; // 電球のフラグ配列にする
        }
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &p[i]);
    }

    // bit全探索で解く
    for (int bit = 0; bit < (1 << N); ++bit) {
        int flag = 0;

        // 各電球についてループ
        for (int i = 0; i < M; i++) {
            int lamp = 0; // 電球がつくか
            int switch_num = 0;

            // どの桁の数字にフラグが立っているか
            for (int j = 0; j < N; j++) {
                if ((1 & bit >> j) == 1) { // j桁目にフラグが立っている
                    if (s[i][j] == 1) {
                        // フラグが立っている桁のs[i][桁]が1ならswitch_num++
                        switch_num++;
                    }
                }
            }

            // switch_numを2で割ったあまりがp[i]ならつく
            if ((switch_num %= 2) == p[i]) {
                lamp = 1;
            }

                // 電球がつかなかったら
                if (lamp == 0)
                {
                    flag = 1;
                    break;
                }
        }

        // 最後に判断
        if (flag == 0) {
            ans++;
        }
    }

    printf("%d", ans);
    return 0;
}