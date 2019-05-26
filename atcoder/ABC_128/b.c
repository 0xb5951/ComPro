#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char s[120][12];
    int p[120];
    int ans[120] = {0};

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%s%d", s[i], &p[i]);
    }

    // for (int i = 0; i < N; i++)
    // {
    //     printf("%s", s[i]);
    //     printf("%d", p[i]);
    // }

    // printf("%d", N);

    // forでほかの値をすべてみて、ans配列に自分の順番を入れる
    for (int i = 0; i < N; i++) {
        int cnt = 0;

        // 他の配列とすべて比較する
        for (int j = 0; j < N; j++) {
            // 自分は除外
            // if (i == j) continue;
            // printf("%d\n", i);
            // printf("%d", strcmp(s[i], s[j]));
            // s[j]の方が早い.つまり,s[i]は後ろ
            if (strcmp(s[i], s[j]) > 0)
            {
                // printf("%s%s\n", s[i], s[j]);
                cnt++;
            }
            else if (strcmp(s[i], s[j]) == 0)
            {
                // 比較相手の方が早い
                if (p[i] < p[j]) {
                    cnt++;
                }
            }
        }
        ans[cnt] += i;
        ans[cnt] += 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}