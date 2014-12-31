#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
  int n,a[3],cnt=0;
  cin >> n;
  for(int i=0;i<3;i++)cin >> a[i];
  sort(a,a+3,greater<int>());
  while(n>0){
    n-=a[(cnt%3)];
    cnt++;
  }
  cout << cnt << endl;
}
