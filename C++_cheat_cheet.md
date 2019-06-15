## 基本
### 文字列を扱いたいとき
基本的に`string`型を使えばいい。
基本例
```C++
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s0; // 空文字で初期化
    string s1(5, 'x');
    string s2 = "fghij";
    // 文字列長を取得
    int s_len = s2.size(); // 5
    cout << << 'sizeでの文字数カウント : ' << s_len << endl;

}

```


### 整数型で対応可能な桁数
intで対応可能な桁数
int 32bit -2147483648 〜 2147483647
1e10

これをオーバしそうならlong long型を使えば基本的に問題はない。

floatで対応可能な桁数
float 32bit	1.17549e-38 〜 3.40282e+38（±10-38 〜 1038）
ほぼfloatで大丈夫

## 参考文献