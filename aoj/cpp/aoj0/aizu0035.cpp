#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void solve(double xa,double ya,double xb,double yb,double xc,double yc,double xd,double yd){
	double bax,bay,bcx,bcy,bdx,bdy,cdx,cdy,cax,cay;
	bax=xa-xb,bay=ya-yb;
	bcx=xc-xb,bcy=yc-yb;
	bdx=xd-xb,bdy=yd-yb;
	cdx=xd-xc,cdy=yd-yc;
	cax=xa-xc,cay=ya-yc;
	if(fabs(fabs(bax*bcy-bcx*bay)-(fabs(bax*bdy-bay*bdx)+fabs(bcx*bdy-bcy*bdx)+fabs(cax*cdy-cay*cdx)))<0.001)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}
int main(){
	double xa,ya,xb,yb,xc,yc,xd,yd;
	while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd)!=EOF){
		solve(xa,ya,xb,yb,xc,yc,xd,yd);
	}
}