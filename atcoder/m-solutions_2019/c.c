#include <stdio.h>

long mod = 1000000007;

int inv_mod(int a, int m)
{
    int b, x, u, q, abs_m, tmp;

    abs_m = (m < 0) ? -m : m;
    b = m;
    x = 1;
    u = 0;
    while (b > 0)
    {
        q = a / b;
        tmp = u;
        u = x - q * u;
        x = tmp;
        tmp = b;
        b = a - q * b;
        a = tmp;
    }

    return (x < 0) ? abs_m + x : x;
}

int main() {
    int N, A, B, C;
    double ans = 0;

    scanf("%d%d%d%d", &N, &A, &B, &C);
    // printf("%d %d %d %d\n", N, A, B, C);

    int kati = A + B;
    // printf("%d", kati);
    long kitai = (100 / kati) * N;

    // printf("%ld\n", kitai);
    ans = (long)inv_mod(2, mod);
    printf("%ld", (long)ans);

    return 0;
}