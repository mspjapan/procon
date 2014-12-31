#include<iostream>

using namespace std;
int p[110],s[110];
int main(){
  int n,m,sum=0;
  cin >> n >> m;
  for(int i=0;i<n;i++)cin >> p[i];
  for(int i=0;i<m;i++)cin >> s[i];
  for(int i=0;i<m;i++)sum+=p[s[i]-1];
  cout << sum << endl;
}
