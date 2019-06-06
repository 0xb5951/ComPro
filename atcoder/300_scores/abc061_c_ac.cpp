// なんかバケツソートで解くらしい
// 勘違いしてた.Ｋ番目に小さい値らしい
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    long long K;
    cin >> N >> K;

    vector<pair<long long , long long>> list(N);

    for(int i = 0; i < N; ++i) {
        cin >> list[i].first >> list[i].second;
    }

    // aをソートする
    sort(list.begin(), list.end());
    long long sum_b = 0;
    int ans = 0;

    for (int i = 0; i < N; ++i)
    {
        // 何番目の要素
        sum_b += list[i].second;
        // cout << sum_b << endl;
        if(K <= sum_b) {
            ans = list[i].first;
            cout << ans << endl;
            return 0;
        }
    }
}