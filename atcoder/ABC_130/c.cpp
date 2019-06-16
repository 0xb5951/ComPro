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
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    double ans;
    char huku = '0';

    // 頂点だった場合
    if ( (x == 0 && y == 0) || (x == 0 && y == H) || (x == W && y == 0) || (x == W && y == H)) {
        ans = (W*H)/2.0;
    } else if (x ==0 || y == 0 || x == W || y == H) {
        // 周上の点だった場合
        vd keisan;
        // 三角形も求める
        if(x == 0 || x == W) {
            keisan.push_back(W * (H - y));
            keisan.push_back(W * (H - y) / 2.0);
            keisan.push_back((W * y) / 2.0);
        }
        if (y == 0 || y == H)
        {
            keisan.push_back((W - x) * H);
            keisan.push_back((W - x) * H / 2.0);
            keisan.push_back((x * H) / 2.0);
        }

        double tmp;
        for (int i = 0; i < keisan.size(); ++i) {
            // cout << keisan[i] << endl;
            if(tmp < keisan[i]) tmp = keisan[i];
        }
        ans = tmp;
    } else {
        double tate, yoko;
        tate = (W - x) * H;
        yoko = W * (H - y);

        if (tate > yoko) {
            ans = tate;
        } else {
            ans = yoko;
        }

        if (W == H)
        {
            huku = '1';
        }
    }

    cout << ans << ' ' << huku << endl;
}