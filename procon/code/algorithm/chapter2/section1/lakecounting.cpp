#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<queue>
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
#include<cassert>
#include<limits>
#include<bitset>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#define MAX_N 110
using namespace std;
//入力
int N,M;
char field[MAX_N][MAX_N+1];

//現在位置(x,y)
void dfs(int x,int y){
  //今いるところを.に置き換える
  field[x][y] = '.';
  //移動する8方向をループ
  for(int dx=-1;dx<=1;dx++){
    for(int dy=-1;dy<=1;dy++){
      //x方向にdx,y方向にdy移動した場所を(nx,ny)とする
      int nx = x + dx,ny = y + dy;

      //nxとnyが庭の範囲内かどうかとfield[nx][ny]が水たまりかどうかを判定
      if(0<=nx && nx<N && 0 <= ny && ny < M && field[nx][ny] == 'W')dfs(nx,ny);
    }
  }
  return ;
}
void solve(){
  int res = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(field[i][j] == 'W'){
        //Wがのこっているならそこから始める
        dfs(i,j);
        res++;
      }
    }
  }
  printf("%d\n",res);
}
int main(){
  cin >> N >> M;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      cin >> field[i][j];
    }
  }
  solve();
}
