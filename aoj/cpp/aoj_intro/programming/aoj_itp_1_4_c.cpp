#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	while(cin >> a >> c >> b && !(c == '?')){
		switch(c){
			case '+':
				cout << a+b << endl;
				break;
			case '-':
				cout << a-b << endl;
				break;
			case '/':
				cout << a/b << endl;
				break;
			case '*':
				cout << a*b << endl;
				break;
			default:
				break;
		}
	}
}