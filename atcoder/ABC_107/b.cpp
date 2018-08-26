
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  char map[101][101] = {};
  int chk[101][101] = {};

  for(int i = 0; i < h; i++){
    scanf("%s", map[i]);
  }

  for(int i=0;i<h;i++) { //横を見る
      bool flag=false;
      //その列に黒があればフラグを立てる
      for(int j=0;j<w;j++) if(map[i][j]=='#') flag=true;
      if(!flag) for(int j=0;j<w;j++) chk[i][j]=true;
  }

  for(int i=0; i < w; i++){ //縦を見る
    bool flag =  false;
    for(int j = 0; j < h; j++) if(map[j][i] == '#') flag = true;
    if(!flag) for(int j = 0; j<h; j++) chk[j][i] =true;
  }

  for(int i=0; i < h; i++){
    bool flag = false;
    for(int j=0; j < w; j++){
      if(!chk[i][j]){ // フラグが立ってないとこをみて
        flag = true;
        printf("%c", map[i][j]);
      }
    }
    if(flag) puts("");
  }


}

//公式回答
#include <iostream>
#include <cstdio>

using namespace std;

int h,w;
string board[110];
bool goodh[110], goodw[110];

int main(){
  cin >> h >> w;
  for(int i=0; i < h; i++){
    cin >> board[i];
  }

  //黒で一次フィルタリングする
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(board[i][j] == '#'){
        goodh[i] = true;
        goodw[j] = true;
      }
    }
  }

  for (int i = 0; i < h; i++) {
    if(goodh[i]){
      for(int j = 0; j < w; j++){
        if(goodw[j]){
          cout << board[i][j];
        }
      }
      cout << endl;
    }
  }

  return 0;
}
