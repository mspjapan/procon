#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(){
  int n,t,a[1001],temp;
  cin >> n >> t;
  for(int i=0;i<1000;i++)a[i] = 0;
  for(int i=0;i<n;i++){
    cin >> temp;
    for(int j=temp;j<t+1;j+=temp){
      a[j]++;
    }
  }
  int * max = max_element(a,a+t+1);
  cout << *max << endl;
}
