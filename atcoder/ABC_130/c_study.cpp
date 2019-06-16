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

/*
この問題の考え方
長方形は対角線の交点に対して、直線を引くと、長方形を2等分にできる。
なので、長方形内のどのような点をとっても二等分にできる。

また、線分が複数存在するのはx,yが長方形の中心に存在する場合。
*/

int main()
{
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    double ans;
    char huku = '0';

    ans = (W * H) / 2.0;

    // x, yが長方形の中心だった場合
    if (x+x == W && y+y == H) {
        huku = '1';
    }

    cout << ans << ' ' << huku << endl;
}