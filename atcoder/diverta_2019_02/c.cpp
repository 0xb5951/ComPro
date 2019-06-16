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
    int n;
    cin >> n;
    vi a;

    rep(i, n) cin >> a[i];

    while (true)
    {
        if (a.size() == 1) break;

        // 今の配列の中での最大値最小値を求める。
        int max = max_element(a.begin(), a.end());
        int min = min_element(a.begin(), a.end());
        // その場所を調べる。
    }
}