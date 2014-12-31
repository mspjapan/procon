#include<iostream>
#include<cmath>
using namespace std;
long a[5001],n,sum,temp;
int main(){
	while(cin >> n && !(n==0)){
		temp = 0;
		sum = -999999;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<(n-i);j++){
				temp += a[i+j];
				sum = max(sum,temp);
			}
			temp = 0;
		}
		cout << sum << endl;
		for(int i=0;i<5001;i++)a[i]=0;
	}
}