#include<cstdio>
#include<iostream>
using namespace std;

void call(int n);
int main(){
	int n;
	cin >> n;
	call(n);
}

void call(int n){
	int x;
	for(int i=1;i<n+1;i++){
		x = i;
		if(i%3 == 0 || i%10==3){
			cout << " " << i;
			continue;
		}
		x/=10;
		while(x){
			if(x%10==3){
				cout << " " << i;
				break;
			}
			x/=10;
		}
	}
	cout << endl;
}