#include <bits/stdc++.h>
#include <string>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;

#define INF (1e9)

// テンプレート関数
#define REP(i, x, n) for (int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> a(N);

    rep(i, N) cin >> a[i];

    int tmp = 0;
    int ans = 1;
    rep(i, N) {
        tmp += a[i];
        if (tmp > X) break;
        // cout << tmp << endl;
        ++ans;
    }

    cout << ans << endl;
}