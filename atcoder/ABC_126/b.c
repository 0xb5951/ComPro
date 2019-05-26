#include <stdio.h>

int ctoi(const char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return -1;
    }
}

int main()
{
    char S[5];

    scanf("%s", S);
    // printf("%c", S[0]);

    int mae, usi = 0;
    // 先頭の二文字
    mae = ctoi(S[0]) * 10 + ctoi(S[1]);
    // 後ろの二文字
    usi = ctoi(S[2]) * 10 + ctoi(S[3]);

    // printf("%d%d", mae, usi);

    // どこかが0だった場合
    if (mae == 0 || usi == 0) {
        if (mae == 0 && usi == 0) {
            printf("NA");
            return 0;
        }

        if (mae == 0 && usi <= 12) {
            printf("YYMM");
            return 0;
        }

        if (mae <= 12 && usi == 0) {
            printf("MMYY");
            return 0;
        }
    }

    // NA どれもない
    if ((mae == 0 && 12 < usi)||(12 < mae && usi == 0) || (12 < mae && 12 < usi))  {
        printf("NA");
        return 0;
    }
    // AMBIGUOUS(どちらもあり得る)
    else if(0 < mae && mae <= 12 && 0 < usi && usi <= 12) {
        printf("AMBIGUOUS");
        return 0;
    }
    // YYMM
    else if(12 <= mae) {
        printf("YYMM");
        return 0;
    } else {
        printf("MMYY");
        return 0;
    }
    return 0;
}