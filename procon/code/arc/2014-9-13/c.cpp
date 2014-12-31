/*
#include<iostream>
using namespace std;
int color[1000100];
int main(){
	ios::sync_with_stdio(false);
	int a,b,n,total=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		for(int j=a;j<=b;j++){
			color[j]++;
		}
	}
	for(int i=0;i<1000001;i++){
		if(total<color[i]){
			total = color[i];
		}
	}
	cout << total << endl;
}
*/
#include<iostream>
#include<cmath>
using namespace std;
int s[1000100],e[1000100];
int main(){
	ios::sync_with_stdio(false);
	int a,b,n,ans=0,temp=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		s[a]++;e[b]++;
	}
	for(int i=0;i<1000001;i++){
		temp = temp+s[i];
		ans = max(ans,temp);
		temp = temp-e[i];
	}
	cout << ans << endl;
}