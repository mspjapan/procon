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
using namespace std;

typedef pair<int, int> P;

// コインの金額
const int V[6] = {1,5,10,50,100,500};

// 入力
int C[6];
int A;

void solve(){
  int ans = 0;
  for(int i=5;i>=0;i--){
    int t = min(A / V[i],C[i]); // コインiを使う枚数
    A -= t * V[i];
    ans += t;
  }
  printf("%d\n",ans);
}
int main(){
  for(int i=0;i<6;i++)cin >> C[i];
  cin >> A;
  solve();
}
