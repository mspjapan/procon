#include<iostream>

using namespace std;

int main(){
  int n,q,a,b,s,t,total;
  cin >> n >> q;
  for(int i=0;i<q;i++){
    cin >> a >> b >> s >> t;
    if(s >= a&&t <= b)total = 0;
    else if(s >= a&&s < b && t > b)total = (t-b)*100;
    else if(s < a&&t>b)total = (a-s)*100+(t-b)*100;
    else if(s < a&&a < t&&t <= b)total = (a-s)*100;
    else total=(t-s)*100;
    cout << total << endl;
  }
}
