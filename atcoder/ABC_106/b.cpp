#include <iostream>

using namespace std;

int main(){
  int a;
  cin >> a;
  int counter = 0;
  int ans = 0;

  for(int i = 1; i <= a; i++){
    counter = 0;
    if(i%2 == 0) continue;
    for(int j = 1; j <= i; j++){
      if(i%j == 0) {
        // cout << i << ' ' << j << endl;
        counter += 1;
      }
    }

    if(counter == 8) ans += 1;
  }

  cout << ans << endl;
}
