#include<iostream>
using namespace std;
bool a[10][10];
void solve(int N);
int main(){
  int N,M,ai,bi;
  for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)a[i][j]=false;
  cin >> N >> M;
  for(int i=0;i<M;i++){
    cin >> ai >> bi;
    a[ai-1][bi-1] = true;
  }
  solve(N);
}
void solve(int N){
  const int INF = 1000000;
  int cnt;
  for(int i=0;i<N;i++){
    int arr[10] = {0};
    for(int j=0;j<N;j++)
      if(a[i][j]||a[j][i]||i==j)arr[j]=INF;
    for(int j=0;j<N;j++){
      if(a[i][j]||a[j][i]){
        for(int k=0;k<N;k++){
          if((arr[k]!=INF&&a[j][k])||(arr[k]!=INF&&k!=j&&a[k][j]))arr[k]=1;
        }
      }
    }
    cnt = 0;
    for(int j=0;j<N;j++){
      if(arr[j] == 1)cnt++;
    }
    cout << cnt << endl;
  }
}
