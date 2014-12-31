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
const int MAX_N = 2000;
using namespace std;

typedef pair<int, int> P;

int N;
char S[MAX_N+1];
void solve(){
  int a = 0,b = N - 1;
  while(a <= b){
    //左から見たものと右から見た場合を比較
    bool left = false;
    for(int i = 0;a+i<=b;i++){
      if(S[a+i]<S[b-i]){
        left = true;
        break;
      } else if(S[a+i]>S[b-i]){
        left = false;
        break;
      }
    }
    if(left)putchar(S[a++]);
    else putchar(S[b--]);
  }
  putchar('\n');
}
int main(){
  cin >> N;
  for(int i=0;i<N;i++)cin >> S[i];
  solve();
}
