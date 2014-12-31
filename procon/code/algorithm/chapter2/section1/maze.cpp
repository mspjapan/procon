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
#define MAX_N 100
#define MAX_M 100
const int INF = 100000000;
using namespace std;

typedef pair<int, int> P;

char maze[MAX_N][MAX_M+1]; // 迷路を表す文字列の配列
int N,M;
int sx,sy; // スタートの座標
int gx,gy; // ゴールの座標

int d[MAX_N][MAX_M]; // 各点までの最短距離の配列

int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1}; // 移動4方向のベクトル

//(sx, sy)から(gx, gy)への最短経路を求める
// たどり着けない場合、INF
int bfs(){
  queue<P> que;
  // すべての点をINFで初期化
  for(int i=0;i<N;i++)
    for(int j=0;j<M;j++) d[i][j] = INF;
  // スタート地点をキューに入れ、その点の距離を0にする
  que.push(P(sx,sy));
  d[sx][sy] = 0;

  // キューが空になるまでループ
  while(!que.empty()){
    //キューの先頭を取り出す
    P p = que.front();que.pop();
    //取り出してきた状態がゴールなら探索をやめる
    if(p.first == gx&&p.second == gy) break;

    // 移動4方向をループ
    for(int i=0;i<4;i++){
      // 移動した後の点を(nx, ny)とする
      int nx = p.first + dx[i],ny = p.second + dy[i];

      //移動が可能かの判定とすでに訪れたことがあるのかの判定(d[nx][ny]!=INFなら訪れたことがある)
      if(0 <= nx && nx < N && 0 <= ny && ny <M && maze[nx][ny] != '#' && d[nx][ny] == INF){
        que.push(P(nx,ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gx][gy];
}

void solve(){
  int res = bfs();
  printf("%d\n",res);
}

int main(){
  cin >> N >> M;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      cin >> maze[i][j];
      if(maze[i][j]=='S')
        sx = i,sy = j;
      if(maze[i][j]=='G')
        gx = i,gy = j;
    }
  }
  solve();
}
