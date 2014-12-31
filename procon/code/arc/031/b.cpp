#include<iostream>
#include<algorithm>
#include<queue>
#include<functional>

using namespace std;
bool field[12][12];
bool use[12][12];
int dx[] = {0,0,1,-1},dy[] = {1,-1,0,0};

void dfs(int x,int y);

int main(){
  int cnt=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      char c;
      cin >> c;
      if(c == 'o'){
        room[i][j] = 1;
        cnt++;
      }
    }
  }
  for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
      if(!room[i][j]){
        memset(use,0,sizeof(use));
        c=0;
        dfs(i,j);
        if(c == cnt++1){
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}

void dfs(int x,int y){
  if(use[x][y]){
    return;
  }
  c++;
  use[x][y] = 1;
  for(int j=0;j<4;j++){
    if(room[x + dx[j]][y+dy[j]]){
      dfs(x + dx[j],y+dy[j]);
    }
  }
}
