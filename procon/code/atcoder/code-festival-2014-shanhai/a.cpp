#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  cout << (pow(10,n)-1) << endl;
  for(int i=0;i<pow(10,n);i++){
    if(n>1&&i<10)
      cout << "0";
    cout << i << endl;
  }
}
