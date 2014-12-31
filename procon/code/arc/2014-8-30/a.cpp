#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n,a,b;
	int i = 0;
	cin >> n >> a >> b;
	while(n > 0){
		if(i%2==0)
			n -=a;
		else
			n -=b;
		if(n <= 0){
			if(i%2==0)
				cout << "Ant" << endl;
			else
				cout << "Bug" << endl;
		}
		i++;
	}
}