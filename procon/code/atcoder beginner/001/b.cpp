#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
	double lm,lk;
	cin >> lm;
	lk = lm/1000;
	if(lk<0.1){
		cout << "00" << endl;
	} else if(lk <= 5){
		lk*=10;
		lk = int(lk);
		if(lk<10){
			cout << "0" << lk << endl;
		} else {
			cout << lk << endl;
		}
	} else if(lk >=6 && lk <=30){
		lk = int(lk);
		cout << (lk+50) << endl;
	} else if(lk >=35 && lk <= 70){
		lk = int(lk);
		cout << int(((lk-30)/5+80)) << endl;
	} else if(lk >70){
		cout << 89 << endl;
	}
}