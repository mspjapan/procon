// 最長共通部分列(LCS: Longest Common Subsequence)と呼ばれる問題
// 計算量はO(nm)
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
const int MAX_N = 1000;
const int MAX_M = 1000;
using namespace std;

typedef pair<int, int> P;

// 入力
int n,m;
char s[MAX_N], t[MAX_M];

// s1...siとt1...tjに対するLCSの長さ
int dp[MAX_N + 1][MAX_M + 1]; // DPテーブル

void solve(){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(s[i] == t[j]){ // si+1=tj+1ならば、s1...siとt1...tjに対する共通部分列の後ろにsi+1をつなげたもの
        dp[i+1][j+1] = dp[i][j] + 1;
      } else { // s1...siとt1...tj+1に対する共通部分列とs1...si+1とt1...tjに対する共通部分列の長い方
        dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
      }
    }
  }
  printf("%d\n",dp[n][m]);
}
int main(){
  cin >> n;
  cin >> m;
  for(int i=0;i<n;i++)cin >> s[i];
  for(int i=0;i<m;i++)cin >> t[i];
  solve();
}
