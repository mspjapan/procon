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
const int INF = 100000000;
const int MAX_N = 100;
const int MAX_W = 10000;
using namespace std;

typedef pair<int, int> P;

// メモ用テーブル
int dp[MAX_N][MAX_W + 1];
// 入力
int n,W;
int w[MAX_N], v[MAX_N];
// i番目以降の品物から重さの総和がj以下となるように選ぶ
int rec(int i, int j){
  if(dp[i][j] >= 0){
    // すでに調べたことがあればその結果を再利用
    return dp[i][j];
  }
  int res;
  if(i == n){
    // もう品物は残っていない
    res = 0;
  } else if(j < w[i]){
    // この品物は入らない
    res = rec(i + 1, j);
  } else {
    // 入れない場合と入れる場合を両方試す
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  return dp[i][j] = res;
}

void solve(){
  memset(dp,-1,sizeof(dp)); //まだ調べていなことを表す-1でメモ用のテーブルを初期化
  printf("%d\n",rec(0,W));
}
int main(){
  cin >> n;
  for(int i=0;i<n;i++)cin >> w[i] >> v[i];
  cin >> W;
  solve();
}
