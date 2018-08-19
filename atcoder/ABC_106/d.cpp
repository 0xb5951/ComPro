#include <iostream>
#include <cstdio>

using namespace std;

int main(){
 int n,m,q;
 cin >> n >> m >> q;
 int l[200000] = {};
 int r[200000] = {};
 int p1[100000] = {};
 int p2[100000] = {};
 int ans[100000] = {};
 int map[200000] = {};

 for(int i = 0; i < m; i++){
   scanf("%d%d", &l[i], &r[i]);
 }

 for(int i = 0; i < q; i++){
   scanf("%d%d", &p1[i], &p2[i]);
 }

 for(int i = 0; i < m; i++){

 }


 for(int i = 0; i < q; i++){
   if((p2[i] - p1[i]) + 1 == n) ans[i] = m;

 }


}
