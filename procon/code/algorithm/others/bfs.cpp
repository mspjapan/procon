//n個の数字のいくつかを用いて和をkにすることができるかを判断する
//幅優先探索
#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

int a[100];
int n,k;

bool solve(){
  int i,j,sum,q_size;
  sum=0;
  queue<int> q;
  if(sum==k)return true;
  q.push(sum);
  for(i=0;i<n;i++){
    q_size = q.size();
    for(j=0;j<q_size;j++){
      sum=q.front();
      q.pop();
      if(sum+a[i]==k)return true;
      q.push(sum+a[i]);
      q.push(sum);
    }
  }
  return false;
}

int main(void){
  int i;
  cin >>n;
  cin >>k;
  for(i=0;i<n;i++){
    cin >>a[i];
  }
  if(solve())cout<<"解はあります"<<endl;
  else cout<<"解はありません"<<endl;
  return 0;
}
