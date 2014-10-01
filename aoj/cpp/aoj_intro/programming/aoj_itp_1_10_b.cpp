#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	double S,L,h,a,b,c,rad,theta;
	cin >> a >> b >> rad;
	theta = rad/180.0*M_PI;
	c = sqrt(a*a+b*b-2*a*b*cos(theta));
	L = a + b + c;
	S = a*b*sin(theta)/2;
	h = b*sin(theta);
	printf("%.8lf %.8lf %.8lf\n",S,L,h);
}