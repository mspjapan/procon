#include<cstdio>
#include<iostream>

using namespace std;

int a[100];
int n,k;

bool solve(int i,int sum){
  //最後なら
  if(i==n)return sum==k;
  //a[i]を使う場合
  if(solve(i+1,sum+a[i]))return true;
  //a[i]を使わない場合
  if(solve(i+1,sum))return true;
  //a[i]に寄らないのでfalseを返す
  return false;
}

int main(){
  int i;
  //値を入力
  cin >> n;
  cin >> k;
  for(i=0;i<n;i++){
    cin >> a[i];
  }
  if(solve(0,0))cout<<"解はあります"<<endl;
  else cout << "解はありません"<<endl;
  return 0;
}
