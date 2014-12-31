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
const int MAX_N = 100000;

using namespace std;

typedef pair<int, int> P;
// 入力
int N, S[MAX_N], T[MAX_N];

P itv[MAX_N];

void solve(){
  // pairは辞書順で比較される
  // 終了時間の早い順にしたいため,Tをfirstに、Sをsecondに入れる
  for(int i=0;i<N;i++){
    itv[i].first = T[i];
    itv[i].second = S[i];
  }
  sort(itv,itv + N);

  // tは最後に選んだ仕事の終了時間
  int ans = 0, t = 0;
  for(int i=0;i<N;i++){
    if(t < itv[i].second){
      ans++;
      t = itv[i].first;
    }
  }
  printf("%d\n",ans);
}

int main(){
  cin >> N;
  for(int i=0;i<N;i++)cin >> S[i];
  for(int i=0;i<N;i++)cin >> T[i];
  solve();
}
