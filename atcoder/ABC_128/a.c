#include <stdio.h>

int main()
{
    int A, P;
    int ans = 0;

    scanf("%d%d", &A, &P);

    ans = (A * 3) + P ;
    ans = ans / 2;

    printf("%d", ans);
    return 0;
}