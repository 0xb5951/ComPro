#include <iostream>
using namespace std;

int main(){
  int r;
  cin >> r;

  if(1200 > r)
    cout << "ABC";
  else if(1200 <= r && 2800 > r)
    cout << "ARC";
  else
    cout << "AGC";

}
