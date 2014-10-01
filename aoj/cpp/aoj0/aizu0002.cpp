#include<iostream>
using namespace std;
int main(){
    int a,b,n,c;
    while(cin >> a >> b){
		n = 1;
		c = a+b;
		while(c >= 10){
		    c /=10;
		    n++;
		}
		cout << n << endl;
    }
}
