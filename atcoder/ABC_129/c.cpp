#include <bits/stdc++.h>

typedef long long ll;

const ll mod = 1000000007;

using namespace std;

// 到達できる数から逆算する

int main()
{
    int N, M;
    cin >> N >> M;

    int a[100000] = {};

    for (int i = 0; i < M; ++i)
    {
        int tmp;
        cin >> tmp;
        a[tmp] = 1;
    }

    // そこまでの到達数をメモする
    ll dp[N+1] = {};
    dp[0] = 1;

    // １か２移動できるので、その分用意する
    if (a[1]) dp[1] = 0;
    else dp[1] = 1;

    for (int i = 2; i < N +1; ++i) {
        // 壊れた床に到達するのは0
        if (a[i] == 1) dp[i] = 0;
        else dp[i] = (dp[i-1] + dp[i-2]) % mod;
    }

    cout << dp[N] << endl;
}