#include<iostream>
#include<algorithm>
#include<vector>
#define INF (1<<29)
using namespace std;

int main(){
	int n,cnt;
	cin >> n;
	vector<int>v(n),dp(n,INF);
	for(int i=0;i<n;i++)
		cin >> v[i];
	for(int i=0;i<n;i++)
		*lower_bound(dp.begin(),dp.end(),v[i])=v[i];
	cnt = lower_bound(dp.begin(),dp.end(),INF)-dp.begin();
	cout << n - cnt << endl;
}