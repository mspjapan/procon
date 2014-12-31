#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,b,d,r;
	cin >> a >> b;
	double f;
	f = (double)a/(double)b;
	d = a/b;
	r = a%b;
	printf("%d %d %f\n",d,r,f);
}