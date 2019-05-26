#include <stdio.h>

int main()
{
    int N, K;
    char S[100];

    scanf("%d%d", &N, &K);
    scanf("%s", S);

    char tmp, tmp_a;
    tmp = S[K-1];


    if(tmp == 'A') {
        tmp_a = 'a';
    }
    else if (tmp == 'B')
    {
        tmp_a = 'b';
    }
    else if (tmp == 'C')
    {
        tmp_a = 'c';
    }

    S[K - 1] = tmp_a;

    printf("%s", S);
    return 0;
}