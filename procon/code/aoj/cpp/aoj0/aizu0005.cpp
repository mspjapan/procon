#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long a,b,gcd,lcm;
	while(cin >> a >> b){
		gcd = __gcd(a,b);
		lcm = a*b/gcd;
		cout << gcd << " " << lcm << endl;
	}
}