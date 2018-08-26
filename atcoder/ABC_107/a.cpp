#include <iostream>

using namespace std;

int main(){
  int i, n;
  cin >> n >> i;
  int ans = 0;

  ans = n - i + 1;
  if(ans == 0) ans = 1;

  cout << ans << endl;
}
