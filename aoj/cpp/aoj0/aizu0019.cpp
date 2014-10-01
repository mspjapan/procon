#include<iostream>
using namespace std;

long factorial(long n){
	if(n==1)return 1;
	else return n*factorial(n-1);
}
int main(){
	long n;
	cin >> n;
	cout << factorial(n) << endl;
}