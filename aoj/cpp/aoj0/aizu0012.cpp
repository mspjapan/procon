#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp,abx,acx,apx,bpx,bcx,aby,acy,apy,bpy,bcy;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		abx=x2-x1,aby=y2-y1;
		acx=x3-x1,acy=y3-y1;
		apx=xp-x1,apy=yp-y1;
		bpx=xp-x2,bpy=yp-y2;
		bcx=x3-x2,bcy=y3-y2;
		if(fabs(fabs(acx*aby-abx*acy)-(fabs(abx*apy-aby*apx)+fabs(acx*apy-acy*apx)+fabs(bcx*bpy-bcy*bpx)))<0.001)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}