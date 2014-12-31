#include<iostream>
using namespace std;

void solve(int d){
	int sum=0;
	for(int i=d;i<600;i+=d){
		sum+=d*i*i;
	}
	cout << sum << endl;
}
int main(){
	int d;
	while(cin >> d){
		solve(d);
	}
}