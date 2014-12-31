#include<iostream>
using namespace std;
typedef long long ll;
void solve(ll diff,ll N){
	for(ll i=0;i<=N;i++){
		if(diff-2*i>=0&&diff-2*i<=(N-i)){
			cout << i << " " << (diff-2*i) << " " << (N-i-(diff-2*i)) << endl;
			return;
		}
	}
	cout << "-1 -1 -1" << endl;
	return;
}
int main(){
	ll N,M,a,e,diff;
	cin >> N >> M;
	diff = 4*N-M;
	if(diff < 0){
		cout << "-1 -1 -1" << endl;
		return 0;
	} else {
		solve(diff,N);
	}
}