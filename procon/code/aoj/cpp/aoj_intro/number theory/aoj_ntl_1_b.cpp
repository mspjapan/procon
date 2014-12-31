#include<iostream>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
ll modPow(ll m,ll n,ll mod){
	ll res=1;
	while(n>0){
		if(n&1)res=res*m%mod;
		m=m*m%mod;
		n>>=1;
	}
	return res;
}
int main(){
	ll m,n;
	cin >> m >> n;
	cout << modPow(m,n,MOD) << endl;
}