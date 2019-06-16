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
    int N;
    cin >> N;
    vi x;
    vi y;
    int ans = 1;
    vi zoubun_num_x;
    vi zoubun_num_y;
    int cnt_0_x = 0;
    int cnt_0_y = 0;

    for (int i = 0; i < N; ++i) {
        int tx, ty;
        cin >> tx >> ty;
        x.push_back(tx);
        y.push_back(ty);
    }

    // 小さい順にならびかえる
    sort(x.begin(), x.end()); //昇順ソート
    sort(y.begin(), y.end()); //昇順ソート

    if (N == 1) {
        cout << ans << endl;
        return 0;
    }

    for (int i = 1; i < N; ++i) {
        int zoubun;
        zoubun = abs(x[i] - x[i-1]);

        if (zoubun == 0)
        {
            ++cnt_0_x;
        }
        else
        {
            if (zoubun_num_x.empty()) zoubun_num_x.push_back(zoubun);
            if (find(zoubun_num_x.begin(), zoubun_num_x.end(), zoubun) == zoubun_num_x.end())
            { // 要素がなかった場合
                zoubun_num_x.push_back(zoubun);
            }
        }
    }

    for (int i = 1; i < N; ++i)
    {
        int zoubun;
        zoubun = abs(y[i] - y[i - 1]);

        if (zoubun == 0) {
            ++cnt_0_y;
        } else {
            if (zoubun_num_y.empty()) zoubun_num_y.push_back(zoubun);
            if (find(zoubun_num_y.begin(), zoubun_num_y.end(), zoubun) == zoubun_num_y.end())
            { // 要素がなかった場合
                zoubun_num_y.push_back(zoubun);
            }
        }
    }
    int zou_num_x = 0;
    int zou_num_y = 0;
    // cout << cnt_0_x << ' ' << cnt_0_y;
    if (zoubun_num_x.empty()) ++cnt_0_x;
    if (zoubun_num_y.empty()) ++cnt_0_y;

            if (cnt_0_x != 0)
            {
                // cout << '0' << endl;
                zou_num_x = zoubun_num_x.size() + --cnt_0_x;
                zou_num_y = zoubun_num_y.size();
            }
            else if (cnt_0_y != 0)
            { // cout << '0' << endl;
                zou_num_x = zoubun_num_x.size();
                zou_num_y = zoubun_num_y.size() + --cnt_0_y;
            }
            else if (cnt_0_x != 0 && cnt_0_y != 0)
            {
                zou_num_x = zoubun_num_x.size() + --cnt_0_x;
                zou_num_y = zoubun_num_y.size() + --cnt_0_y;
            }
            else
            {
                // cout << '0 <' << endl;
                zou_num_x = zoubun_num_x.size();
                zou_num_y = zoubun_num_y.size();
            }


    if (zou_num_x > zou_num_y) {
        ans = zou_num_x;
    } else {
        ans = zou_num_y;
    }

    cout << ans << endl;
}