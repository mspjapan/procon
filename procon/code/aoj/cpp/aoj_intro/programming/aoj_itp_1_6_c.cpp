#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	int b,f,r,v;
	int building[4][3][10] = {};
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> b >> f >> r >> v;
		building[b-1][f-1][r-1] += v;
	}
	for(int j=0;j<4;j++){
		for(int k=0;k<3;k++){
			for(int l=0;l<10;l++){
				cout << ' ' << building[j][k][l];
			}
			cout << endl;
		}
		if(j<3)
			cout <<"####################" << endl;
	}
}