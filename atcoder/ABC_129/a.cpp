#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;

    if (a <= b && a <= c) {
        ans += a;
    } else if (b <= c) {
        ans += b;
    } else {
        ans += c;
    }

    cout << ans << endl;
}