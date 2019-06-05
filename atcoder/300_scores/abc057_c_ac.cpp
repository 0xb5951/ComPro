#include <iostream>

using namespace std;
using ll = long long;

// 桁数を求める
int cnt_dig(ll num) {
    int cnt = 0;
    while(num > 0) {
        num /= 10;
        cnt++;
    }

    return cnt;
}

int main() {
    ll N;
    cin >> N;

    // 最大公約数を求める
    ll tmp_m = 0;
    ll ans = cnt_dig(N);

    for(ll i = 1ll; (i * i) <= N; ++i) {
        if (N%i != 0) continue;
        const ll B = N / i;

        const int tmp_m = max(cnt_dig(i), cnt_dig(B));

        if (tmp_m < ans) {
            ans = tmp_m;
        }
    }

    cout << ans << endl;
    return 0;
}