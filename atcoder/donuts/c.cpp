#include<iostream>
using namespace std;

int a[100001],N;
long long sum,temp;
int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> a[i];
	}
	temp=0;
	sum=-99999999;
	for(int i=0;i<N;i++){
		for(int j=0;j<(N-i);j++){
			temp+=a[i+j];
			sum=max(sum,temp);
		}
		temp=0;
	}
	cout << sum << endl;
}