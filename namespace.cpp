#include<iostream>
using namespace std;

int factorial(int);
int main(){
	int a;
	cin >> a;
	cout << factorial(a) << endl;
}

int factorial(int n){
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}