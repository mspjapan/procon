#include<iostream>
using namespace std;

int main(){
	int t,n,times;
	cin >> t;
	for(int i=0;i<t;i++){
		times = 0;
		cin >> n;
		while(n!=1){
			if(n%2==1)
				n = 3*n + 1;
			else
				n /=2;
			times++;
		}
		cout << times << endl;
	}
}