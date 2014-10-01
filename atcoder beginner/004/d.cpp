#include<iostream>
using namespace std;

int main(){
	int R,G,B,sum=0;
	cin >> R >> G >> B;
	if(G>200){

	} else {
		for(int i=R-1;i>1;i--)
			sum+=i;
		for(int i=G-1;i>1;i--)
			sum+=i;
		for(int i=B-1;i>1;i--)
			sum+=i;
	}
	cout << sum << endl;
}