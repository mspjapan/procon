#include<iostream>

using namespace std;

int main(){
  int n,v[101],f[101],cnt=0;
  cin >> n;
  for(int i=0;i<n;i++)cin >> v[i];
  for(int i=0;i<n;i++)cin >> f[i];
  for(int i=0;i<n;i++)
    if(f[i]*2 > v[i])cnt++;
  cout << cnt << endl;
}
