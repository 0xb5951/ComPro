#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main () {
    int N;
    cin >> N;
    int color[8] = {0};
    int a[N+3] = {};

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < N; ++i)
    {
        if (a[i] < 400) ++color[0];
        else if (a[i] < 800) ++color[1];
        else if (a[i] < 1200) ++color[2];
        else if (a[i] < 1600) ++color[3];
        else if (a[i] < 2000) ++color[4];
        else if (a[i] < 2400) ++color[5];
        else if (a[i] < 2800) ++color[6];
        else if (a[i] < 3200) ++color[7];
        else  ++color[8];
    }

    for (int i = 0; i < 8; ++i)
    {
        // cont << color[i] << endl;
        if(color[i] != 0) {
            // cout << color[i];
            ++ans;
        }
    }

    if (ans != 0)
        cout << ans << ' ' << ans+color[8] << endl;
    else
        cout << 1 << ' ' << ans + color[8] << endl;
}