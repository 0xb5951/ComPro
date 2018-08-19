#include <iostream>

using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int sum = 0;
  sum = a*b;
  sum -= b;
  sum -= a;
  sum++;
  cout << sum << endl;

}
