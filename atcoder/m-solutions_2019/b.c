#include <stdio.h>
#include <string.h>

int main()
{
    char S[20];

    scanf("%s", S);

    int len = 0;
    len = strlen(S);
    int cnt = 0;

    for(int i = 0; i < len; i++) {
        if (S[i] == 'x')
        {
            cnt++;
        }
    }

    // printf("%d", cnt);


    if (cnt > 7) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}