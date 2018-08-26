#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  int rousoku[n] = {};

  for(int i = 0; i < n; i++){
    cin >> rousoku[i];
  }

  long long ans = 1e10;

  //連続したろうそくを選択する方法がベスト
  for(int i = 0; i < n - k+1; i++){
    //右から辿る方と左から辿る方
    long long l,r = 0;
    l = abs(rousoku[i]) + abs(rousoku[i] - rousoku[i+k-1]);
    r = abs(rousoku[i+k-1]) + abs(rousoku[i] - rousoku[i+k-1]);
    long long temp = min(l, r);
    ans = min(temp, ans);

  }

  cout << ans << endl;

}
