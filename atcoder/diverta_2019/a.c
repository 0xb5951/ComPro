#include <stdio.h>

int main () {
    int N, K;

    scanf("%d%d", &N, &K);

    int ans = 0;
    ans = N - K + 1;

    printf("%d", ans);
    return 0;
}