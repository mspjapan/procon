#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	double xa,ya,xb,yb,ra,rb;
	long double d;
	cin >> n;
	while(n--){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		d = hypot(xa-xb,ya-yb);
		if(d+ra<rb)cout << -2 << endl;
		else if(d > ra+rb)cout << 0 << endl;
		else if(d+rb < ra)cout << 2 << endl;
		else cout << 1 << endl;
	}
}