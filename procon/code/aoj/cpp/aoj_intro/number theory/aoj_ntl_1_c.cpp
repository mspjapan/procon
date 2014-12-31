#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,a,lcm=1;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		lcm = (lcm*a)/__gcd(lcm,a);
	}
	cout << lcm << endl;
}