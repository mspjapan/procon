#include<iostream>
#include<cmath>
using namespace std;

int weights[10];
int main(){
	int weight,n;
	while(cin >> weight){
		n=0;
		for(int i=0;i<10;i++)
			weights[i]=0;
		for(int i=0;i<10;i++){
			if(weight-pow(2,9-i)>=0){
				weights[9-i]=1;
				weight-=pow(2,9-i);
			}
		}
		for(int i=0;i<10;i++){
			if(weights[i]==1){
				if(n==0)
					cout << pow(2,i);
				else
					cout << " " << pow(2,i);
				n++;
			}
		}
		cout << endl;
	}
}