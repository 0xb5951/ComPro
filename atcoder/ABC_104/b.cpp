#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int flag = 0;
  int c_count = 0;

  if(s[0] != 'A')
    flag = 1;

  if((s[1]>= 'A') && (s[1]<='Z'))
    flag = 1;

  int last;
  last = s.length() - 1 ;
  if((s[last]>= 'A') && (s[last]<='Z'))
    flag = 1;


  for(int i = 2; i < s.length(); i++){
    if(s[i] == 'C') c_count++;
    if((s[i] >= 'A') && (s[i] < 'C') && (s[i] > 'C')&& (s[i]<='Z'))
      flag = 1;
  }

  if(flag == 0 && c_count == 1){
    cout << "AC";
  } else
    cout << "WA";
}
