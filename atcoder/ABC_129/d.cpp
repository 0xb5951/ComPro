#include <bits/stdc++.h>
using namespace std;

char floormap[2000][2000] = {};
int H, W;

int count_lamp_ue(int th, int tw) {
    int ret = 0;

    // 上を見に行く
    for(int i = (th-1); 0 <= i; --i) {
        if (floormap[i][tw] == '#') break;
        ++ret;
    }
    return ret;
}

int count_lamp_sita(int th, int tw)
{
    int ret = 0;
    // 下を見に行く
    // cout << th << H;
    for (int j = th; j < H; ++j) {
        // cout << floormap[j][tw];
        if (floormap[j][tw] == '#') break;
        ++ret;
    }

    return ret;
}


int count_lamp_migi(int th, int tw)
{
    int ret = 0;

    // 右を見に行く
    for (int i = (tw+1); i < W; ++i)
    {
        if (floormap[th][i] == '#')
            break;
        ++ret;
    }

    return ret;
}

int count_lamp_hidari(int th, int tw)
{
    int ret = 0;

    // // 左を見に行く
    for (int i = (tw-1); 0 <= i; --i)
    {
        if (floormap[th][i] == '#')
            break;
        ++ret;
    }

    return ret;
}
int main()
{
    cin >> H >> W;
    int ans = 0;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            cin >> floormap[i][j];
        }
    }

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            int tmp = 0;
            if (floormap[i][j] == '#') continue;
            tmp = count_lamp_ue(i, j) + count_lamp_sita(i, j) + count_lamp_migi(i, j) +  count_lamp_hidari(i, j);
            if (tmp > ans)  {
                ans = tmp;
                continue;
            }
        }
    }

    cout << ans << endl;
}