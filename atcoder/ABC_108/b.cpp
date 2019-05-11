#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >>  x1 >> y1 >> x2 >> y2;
  int x3, y3, x4, y4;
  int hen = 0;
  int x_diff, y_diff;
  x_diff = x2 - x1;
  y_diff = y2 - y1;
  // hen = sqrt(pow(x_diff, 2)) + pow(y_diff, 2)));

  x3 = x2 - y_diff;
  y3 = y2 + x_diff;

  x4 = x1 - y_diff;
  y4 = y1 + x_diff;


  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
