#include<iostream>
using namespace std;
int a[1000];
int main(){
	int N,odd=0,even=0;
	cin >> N;
	for(int i=1;i<N+1;i++){
		cin >> a[i];
	}
	if(N%2==1){
		cout << "error" << endl;
	} else{
		for(int i=1;i<=(N+1)/2;i++){
			odd+=a[2*i-1];
			even+=a[2*i];
		}
		cout << (even-odd) << endl;
	}
}