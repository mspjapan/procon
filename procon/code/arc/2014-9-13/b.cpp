#include<iostream>
#include<cmath>
using namespace std;

int a[100];
int main(){
	int n,X,sum=0;
	cin >> n >> X;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		if(X-pow(2,(n-1-i)) >= 0){
			X -=pow(2,(n-1-i));
			sum +=a[n-1-i];
		}
	}
	cout << sum << endl;
}