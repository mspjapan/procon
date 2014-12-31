#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
	ll A,B,cnt4=0,cnt100=0,cnt400=0;
	int diffA,diffB;
	cin >> A >> B;

	diffA = (A%4==0) ? 0 : 4- A % 4;
	diffB = (B%4==0) ? 0 : B % 4;
	cnt4 =  (B-diffB)/4 - (A+diffA)/4 + 1;
	cnt100 = floor((B-diffB)/100) - floor((A+diffA)/100);
	if((A+diffA)%100==0)
		cnt100++;
	cnt400 = floor((B-diffB)/400) - floor((A+diffA)/400);
	if((A+diffA)%400==0)
		cnt400++;
	cout << (cnt4 - cnt100 + cnt400) << endl;
}