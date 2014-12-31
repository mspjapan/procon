#include<iostream>

using namespace std;

int main(){
  int a,b,c,s1,s2,s3,s4,maxval;
  cin >> a;
  cin >> b;
  cin >> c;
  s1 = a + b + c;
  s2 = (a + b) * c;
  s3 = a * b + c;
  s4 = a * b * c;
  maxval = max(s1,max(s2,max(s3,s4)));
  cout << maxval << endl;
}
