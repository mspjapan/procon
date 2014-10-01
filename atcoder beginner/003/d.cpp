#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int v[1000],v2[1000];
void init(int n,int r){
	for(int i=0;i<n+r;i++)
		v[i]=1;
	for(int i=0;i<r;i++)
		v2[i]=1;
}
ll combination(ll n,ll r){
	cout << n << " " << r << endl;
	ll sum = 1;
	int j = 1;
	for(int i=n-r+1;i<=n;i++){
		for(int j=2;j<=r;j++){
			if(v2[j]==1&&i%j==0){
				
			}
		}
	}
	return (sum%1000000007);
}
int main(){
	ll sum;
	int R,C,X,Y,D,L,xn,yn;
	cin >> R >> C;
	cin >> X >> Y;
	cin >> D >> L;
	xn = C-X+1,yn = R-Y+1;
	sum = ((xn*yn)%1000000007);
	sum *=combination(X*Y,min(D,L));
	cout << (sum%1000000007) << endl;
}