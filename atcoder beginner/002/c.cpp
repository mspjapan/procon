#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int xa,ya,xb,yb,xc,yc,abx,aby,acx,acy;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	abx = xb-xa,aby=yb-ya;
	acx = xc-xa,acy=yc-ya;
	printf("%.1lf\n",fabs(abx*acy-aby*acx)/2);
}