#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
  string S;
  cin >> S;

  int num[10] = {};
  int k;

  cin >> k;
  int ans = 0;
  int count = 0;

  for(int i = 0; i < S.size(); i++){
    if(S[i] != '1') break;

    count++;
  }

  if(S.size() == 1){
    S.c_str();
    cout << S[0] << endl;
  }
  else if(k <= count) cout << 1 << endl;
  else{
    S.c_str();
    cout << S[count] << endl;
  }
}
