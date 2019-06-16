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
    vector<int> a(n);

    rep(i, n) cin >> a[i];

    // 昇順ソート
    sort(a.begin(), a.end());

    // 配列の合計最大値を求める
    vi ps, ns;

    // マイナスしかなくても、ここでいい感じになる
    ps.push_back(a[n - 1]);
    ns.push_back(a[0]);

    for (int i = 1; i < n - 1; ++i)
    {
        // プラスをマイナスで分ける
        if (a[i] > 0) ps.push_back(a[i]);
        else ns.push_back(a[i]);
    }

    int ans = 0;
    for (auto p : ps) ans += p;
    for (auto n : ns) ans -= n;
    cout << ans << endl;

    // ここから操作手順を書く
    // 一番小さい値からでかい値をくっつける
    int tmp = ns[0];
    for (int i = 1; i < ps.size(); ++i)
    {
        cout << tmp << " " << ps[i] << endl;
        tmp = tmp - ps[i];
    }
    // 一番大きい値から引く
    cout << ps[0] << " " << tmp << endl;
    tmp = ps[0] - tmp;

    for (int i = 1; i < ns.size(); ++i)
    {
        cout << tmp << " " << ns[i] << endl;
        tmp = tmp - ns[i];
    }

    return 0;
}