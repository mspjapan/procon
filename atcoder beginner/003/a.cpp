#include<iostream>
using namespace std;

int main(){
	int N;
	double sum=0;
	cin >> N;
	for(int i=0;i<N;i++){
		sum+=(double)10000*(i+1)/N;
	}
	cout << (int)sum << endl;
}