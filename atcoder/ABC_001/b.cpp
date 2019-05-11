#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  double m;
  cin >> m;
  m /= 1000;

  int ans = 0;
  // printf("%.lf", m);
  if( m < 0.1) {
    cout << "00" << endl;
  } else if ( m >= 0.1 && m < 1){
    ans = m * 10;
    cout << 0 << ans << endl;
  } else if( m >= 1 && m <= 5 ) {
    ans = m * 10;
    cout << ans << endl;
  } else if ( m >= 6 &&  m <= 30 ) {
    ans = m + 50;
    cout << ans << endl;
  } else if ( m >= 35 && m <= 70){
    ans = ((m - 30)/5) + 80;
    cout << ans << endl;
  } else if ( m > 70){
    ans = 89;
    cout << ans << endl;
  }

  return 0;
}
