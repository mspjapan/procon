#include<iostream>
using namespace std;
int num[1000010];
void init(){
	for(int i=2;i<1000000;i++){
		if(num[i]==0){
			for(int j=2*i;j<1000000;j+=i)
				num[j]=1;
		}
	}
}
void solve(int n){
	int cnt=0;
	for(int i=2;i<=n;i++)
		if(num[i]==0)cnt++;
	cout << cnt << endl;
}
int main(){
	init();
	int n;
	while(cin >> n){
		solve(n);
	}
}