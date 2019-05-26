#include <stdio.h>
#include <math.h>

int main()
{
    int N, K;
    double ans = 0.0;

    scanf("%d%d", &N, &K);
    // 確率計算
    for (int i = 1; i <= N; i++) {
        double tmp = 1/N; // その目が出る確率

        int num = i;
        // 勝つまでのループ
        while (num<K)
        {
            num *= 2;
            tmp /= 2;
        }
        ans += tmp;
    }

    printf("%lf", ans);
    return 0;
}