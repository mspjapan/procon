#include<iostream>
#include<cstdio>
using namespace std;

int extendgcd(int a,int b,int& x,int& y){
	int d = a;
	if(b!=0){
		d = extendgcd(b,a%b,y,x);
		y -=(a / b)*x;
	} else {
		x=1;
		y=0;
	}
	return 0;
}

int main(){
	int a,b,x,y;
	cin >> a >> b;
	extendgcd(a,b,x,y);
	cout << x << " " << y << endl;
}