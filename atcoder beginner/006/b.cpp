#include<iostream>
using namespace std;
typedef long long ll;
ll a[1000010];

void init(){
	a[0] = 0,a[1] = 0,a[2] = 1;
	for(int i=3;i<1000001;i++){
		a[i] = (a[i-1]+a[i-2]+a[i-3])%10007;
	}
}
int main(){
	int n;
	ll ans;
	cin >> n;
	init();
	ans = a[n-1]%10007;
	cout << ans << endl;
}