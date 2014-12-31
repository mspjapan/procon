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
const int MAX_N = 20000;
using namespace std;

typedef pair<int, int> P;
typedef long long ll;
int N,L[MAX_N];

void swap(int n1,int n2){
  int temp = L[n1];
  L[n1] = L[n2];
  L[n2] = temp;
}

void solve(){
  ll ans = 0;

  // 板が1本になるまで適用
  while(N > 1){
    // 一番短い板mii1,次に短い板mii2を求める
    int mii1 = 0,mii2 = 1;
    if(L[mii1] > L[mii2]) swap(mii1,mii2);

    for(int i=2;i<N;i++){
      if(L[i] < L[mii1]){
        mii2 = mii1;
        mii1 = i;
      } else if(L[i] < L[mii2]){
        mii2 = i;
      }
    }

    // それらを併合
    int t = L[mii1] + L[mii2];
    ans += t;
    if(mii1 == N-1) swap(mii1, mii2);
    L[mii1] = t;
    L[mii2] = L[N-1];
    N--;
  }

  printf("%lld\n",ans);
}

int main(){
  cin >> N;
  for(int i=0;i<N;i++)cin >> L[i];
  solve();
}
