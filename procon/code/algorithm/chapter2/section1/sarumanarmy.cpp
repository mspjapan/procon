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
using namespace std;

typedef pair<int, int> P;

int N, R;
int X[MAX_N];

void solve(){
  sort(X, X+N);
  int i=0,ans=0;
  while(i < N){
    // sはカバーされていない一番左の点の位置
    int s = X[i++];
    // sから距離Rを超える点まで進む
    while(i < N && X[i] <= s + R)i++;

    // pは新しく印をつける点の位置
    int p = X[i-1];
    // pから距離Rを超える点まで進む
    while(i < N && X[i] <= p+R)i++;

    ans++;
  }
  printf("%d\n",ans);
}

int main(){
  cin >> N;
  cin >> R;
  for(int i=0;i<N;i++)cin >> X[i];
  solve();
}
