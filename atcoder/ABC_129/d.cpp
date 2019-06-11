#include <bits/stdc++.h>
using namespace std;

char floormap[2000][2000] = {};
int H, W;

int Umap[2000][2000] = {};
int Rmap[2000][2000] = {};
int Smap[2000][2000] = {};
int Lmap[2000][2000] = {};

// 事前にその場所でランプを照らせる箇所を計算する
void count_lamp_ue() {
// その場所から上にどれだけ移動できるか

    for (int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            if (floormap[i][j] == '#') Umap[i][j] = 0;
            else if (i == 0) Umap[i][j] = 1;
            else Umap[i][j] = Umap[i-1][j] + 1;
        }
    }
}

bool count_lamp_sita() {
// その場所から下にどれだけ移動できるか
    for (int i = H; i > 0; --i) {
        for(int j = 0; j < W; ++j) {
            if (floormap[i][j] == '#') Smap[i][j] = 0;
            else if (i == H) Smap[i][j] = 1;
            else Smap[i][j] = Smap[i+1][j] + 1;
        }
    }
}

bool count_lamp_migi() {
// その場所から右にどれだけ移動できるか
    for (int i = 0; i < H; ++i) {
        for(int j = W; j > 0; --j) {
            if (floormap[i][j] == '#') Rmap[i][j] = 0;
            else if (j == W) Rmap[i][j] = 1;
            else Rmap[i][j] = Rmap[i][j+1] + 1;
        }
    }
}

bool count_lamp_hidari() {
// その場所から左にどれだけ移動できるか
    for (int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            if (floormap[i][j] == '#') Lmap[i][j] = 0;
            else if (j == 0) Lmap[i][j] = 1;
            else Lmap[i][j] = Lmap[i][j-1] + 1;
        }
    }
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

    count_lamp_ue();
    count_lamp_sita();
    count_lamp_migi();
    count_lamp_hidari();

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            int tmp = 0;
            if (floormap[i][j] == '#') continue;
            tmp = Umap[i][j] + Umap[i][j] + Rmap[i][j] + Lmap[i][j] - 3;
            if (tmp > ans)  {
                ans = tmp;
                continue;
            }
        }
    }

    cout << ans << endl;
}