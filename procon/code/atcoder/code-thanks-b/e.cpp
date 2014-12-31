#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
using namespace std;
typedef pair<int,int> P;
int field[50][50];
int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
void draw(int r,int c,int h,int w);
void solve(int r,int c,int rs,int cs,int rg,int cg);
int main(){
  int r,c,n,rs,cs,rg,cg,rt,ct,ht,wt;
  cin >> r >> c;
  cin >> rs >> cs;
  cin >> rg >> cg;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> rt >> ct >> ht >> wt;
    draw(rt,ct,ht,wt);
  }
  solve(r,c,rs-1,cs-1,rg-1,cg-1);
}

void draw(int r,int c,int h,int w){
  for(int i=r-1;i<r+h-1;i++)
    for(int j=c-1;j<c+w-1;j++)
      field[i][j] = 1;
}
void solve(int r,int c,int rs,int cs,int rg,int cg){
  bool flag = false;
  const int INF = 100000000;
  int d[r][c],nx,ny;
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      d[i][j] = INF;
  queue<P> que;
  que.push(P(rs,cs));
  while(que.size()){
    if(field[rs][cs]==0)break;

    P p = que.front();que.pop();
    if(p.first == rg&&p.second==cg){
      flag = true;
      break;
    }
    for(int i=0;i<4;i++){
      nx = p.first + dx[i],ny = p.second + dy[i];
      if(0<=nx&&nx<r&&0<=ny&&ny<c&&field[nx][ny]==1&&d[nx][ny]==INF){
        que.push(P(nx,ny));
        d[nx][ny] = 0;
      }
    }
  }
  if(flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
