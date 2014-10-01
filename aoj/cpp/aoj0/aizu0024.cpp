#include<iostream>
using namespace std;

int main(){
	double min_v,y,t,n;
	while(cin >> min_v){
		n=0;
		t = min_v/9.8;
		y = 4.9*t*t;
		while(5*(++n-1)<y)
		;
		cout << n << endl;
	}
}