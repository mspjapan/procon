#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	double x1,y1,x2,y2,x3,y3,x4,y4,xab,yab,xcd,ycd;
	cin >> n;
	while(n--){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		xab = x2-x1,yab = y2-y1;
		xcd = x4-x3,ycd = y4-y3;
		if(abs(xab*ycd-xcd*yab)<=0.0000000001)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}