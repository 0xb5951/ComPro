#include<iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int sum;
  sum = a*b;
  if(sum %2 == 1)
    cout << "Odd" << endl;
  else
    cout << "Even" << endl;

}
