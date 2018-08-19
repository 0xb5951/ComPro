#include <iostream>
#include <string>
using namespace std;

int main(){
  int d,g;
  int p[10] = {};
  int c[10] = {};
  int ten[100] = {};
  int mondai = 1;
  int flag[10] = {};
  int temp_1 = 0, temp_2 = 0, temp_3 = 0;
  int count;

  cin >> d >> g;

  for(int i = 0; i < d; i++){
    cin >> p[i] >> c[i];
  }


  while(1){ //問題数カウント
    temp_1 = 0;
    temp_2 = 0;
    temp_3 = 0;
    count = 0;
    for(int i = 0; i < d; i++){
      for(int j = 0; j < d; j++){
        if(flag[j] == 1) count += p[j];
      }
      if((mondai - count) > p[i]){
        temp_2 += ten[mondai-1];
        flag[i] = 1;
        continue;
      }
      temp_1 = (mondai - count) * (i+1) * 100 + temp_2;
      if(mondai == p[i]) temp_1 += c[i];

      if(ten[mondai] < temp_1)
        ten[mondai] = temp_1;
    }
    if(ten[mondai] >= g) break;
    mondai++;
  }


  for(int i = 0; i < 10; i++){
    cout << ten[i] << endl;
  }

  // cout << mondai;

}


/*公式の回答*/
#include <iostream>
using namespace std;

int main(){
    int D, G, p[11], c[11];
    cin >> D >> G;
    for(int i = 0; i < D; ++i){
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;

    for(int mask = 0; mask < (1 << D); ++mask){
        int s = 0, num = 0, rest_max = -1;

        for(int i = 0; i < D; ++i){
            if(mask >> i & 1){ //maskをiだけ右ビットシフトして、フラグが立っていれば
                s += 100 * (i+1) * p[i] + c[i];
                num += p[i];
            }else{
                rest_max = i; //中途半端に解く問題
            }
        }

        if(s < G){
            int s1 = 100 * (rest_max + 1);
            int need = (G - s + s1 - 1) / s1;
            if(need >= p[rest_max]){
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
}
