#include<iostream>
using namespace std;
int factorial(int n){
	if(n==1 || n==0)return 1;
	else return n*factorial(n-1);
}
int count(int r,int N){
	return factorial(N)/(factorial(r)*factorial(N-r));
}

int main(){
	int N,M,cnt=0;
	cin >> N >> M;
	for(int i=0;i<N/2;i++){
		cnt += count(i+1,N)/2;
	}
	cout << cnt << endl;
}