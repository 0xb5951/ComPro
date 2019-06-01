#include <iostream>
using namespace std;

int main() {
    int sx, sy, tx, ty;
    string ans;

    cin >> sx >> sy >> tx >> ty;

    // 一回目の移動
    int move_y = abs(ty - sy);
    int move_x = abs(tx - sx);

    for(int i = 0; i < move_y; i++) ans += "U";
    for (int i = 0; i < move_x; i++) ans += "R";
    for(int i = 0; i < move_y; i++) ans += "D";
    for (int i = 0; i < move_x; i++) ans += "L";

    // 二回目の移動
    ans += "L";
    for(int i = 0; i < move_y+1; i++) ans += "U";
    for (int i = 0; i < move_x+1; i++) ans += "R";
    ans += "DR";
    for(int i = 0; i < move_y+1; i++) ans += "D";
    for (int i = 0; i < move_x+1; i++) ans += "L";
    ans += "U";

    cout << ans << endl;
}