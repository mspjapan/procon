#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define MAX_N 30
using namespace std;
int a[MAX_N];
int n,k;

bool dfs(int i,int sum){
  if(i==n) return sum == k;
  if(dfs(i+1,sum)) return true;

  if(dfs(i+1,sum+a[i])) return true;

  return false;
}

void solve(){
  if(dfs(0,0))printf("Yes\n");
  else printf("No\n");
}
int main(){
  cin >> n >> k;
  for(int i=0;i<n;i++)cin >> a[i];
  solve();
}
