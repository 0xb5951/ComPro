#include <iostream>

using namespace std;

int main() {
  int k;
  cin >> k;

  int ans = 0;

  if(k % 2 == 1){
    ans = (k/2) * (k/2 + 1);
  } else {
    ans = (k/2) * (k/2);
  }

  if (k == 3) {
    ans = 2;
  }
  cout << ans << endl;

  return 0;
}
