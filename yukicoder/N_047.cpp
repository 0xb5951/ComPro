#include <iostream>

using namespace std;

int main(){
  int a;
  cin >> a;
  int i;
  int ans = 0;
  int temp = 1;
  for(i = 0; ;i++){
    if(temp*i*2 >= a) break;
  }
  // ++i;
  cout << i;
}
