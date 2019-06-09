#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> w = {};

    for(int i = 0; i < N; ++i) {
        int tmp;
        cin >> tmp;
        w.push_back(tmp);
    }

    // sort(w.begin(), w.end());
    int ans = 9999999;

    for (int i = 0; i < N; ++i){
        int left = 0;
        int tmp = 0;
        for(int j = 0; j <= i; ++j) {
            left += w[j];
        }

        int right = 0;
        for(int j = i+1; j < N; ++j) {
            right += w[j];
        }
        // cout << left << ' ' << right << endl;

        tmp = abs(left - right);
        if(ans > tmp) {
            ans = tmp;
        }

    }
        cout << ans << endl;
}