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
この問題の概要
ボールが二次元配列にある。
任意のp,qを決めて、ボールの座標(a,b)に対して、(a-p, b-q)が連続するときコストがかからないとする。
その場合の最小コストを求める。最初に絶対1かかる。

考え方
p,qをベクトルと考える。
ボールの座標に対して、設定したベクトルを割り当てる。
そのベクトルの数を数えて、Nから引く。
ansの最大数はＮ。

または
すべてのボール座標の差分を求めて、その数を元に全探索を行い、最小になるコストを求める。
*/

int main()
{
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    int ans = N;

    rep(i, N) cin >> x[i] >> y[i];

    rep(i, N) {
        rep(j, N) {
            if(i == j) continue;
            // すべてのボールの差分を求める。
            // 基本的にボールの差分しかp,qになりうる値はない。
            int p = x[i] - x[j];
            int q = y[i] - y[j];
            int cnt = 0;

            rep(k, N) {
                rep(l, N) {
                    // 差分とあっているか確かめる
                    if (x[l] - x[k] == p && y[l] - y[k] == q) {
                        ++cnt;
                    }
                }
            }
            ans = min(ans, N - cnt);
        }
    }

    if (N == 1)
    {
        cout << "1";
    }
    else
    {
        cout << ans;
    }
}