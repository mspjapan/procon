#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string name,r_name;
  cin >> name;
  r_name = name;
  reverse(r_name.begin(),r_name.end());
  if(name.compare(r_name)==0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
