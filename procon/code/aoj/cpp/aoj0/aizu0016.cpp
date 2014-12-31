#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double d,t,x=0,y=0,theta=0;
	while(scanf("%lf,%lf",&d,&t)&&!(d==0&&t==0)){
		x+=sin(theta*3.14159/180)*d;
		y+=cos(theta*3.14159/180)*d;
		theta += t;
	}
	printf("%d\n%d\n",(int)x,(int)y);
}