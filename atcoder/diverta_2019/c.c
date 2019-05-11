#include <stdio.h>
#include <string.h>

int main()
{
    int N;

    scanf("%d", &N);

    char words[10010][12] = {""};

    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
    }

    int ans_count = 0;
    int cnt_A = 0;
    int cnt_B = 0;
    int cnt_AB = 0;
    int str_len = 0;

    for (int i = 0; i < N; i++)
    {
        if (strstr(words[i], "AB") != NULL)
        {
            ans_count++;
        }

        str_len = strlen(words[i]);

        if (words[i][str_len - 1] == 'A')
        {
            cnt_A++;
        }

        if (words[i][0] == 'B')
        {
            cnt_B++;
        }

        if ((words[i][0] == 'B') && (words[i][str_len - 1] == 'A'))
        {
            cnt_AB++;
        }

    }
    int AB_cnt = 0;
    if ( cnt_A >= cnt_B) {
        AB_cnt = cnt_B;
    } else {
        AB_cnt = cnt_A;
    }

    // printf("%d%d\n", cnt_A, cnt_B);
    // printf("%d %d", AB_cnt, cnt_AB);

    // for (int i = 0; i < N; i++)
    // {
    //     printf("%s", words[i]);
    // }

    printf("%d", ans_count+AB_cnt);
    return 0;
}