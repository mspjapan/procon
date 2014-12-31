#include<iostream>
using namespace std;
char c[4][4];
int main(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin >> c[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(j==0)
				cout << c[3-i][3-j];
			else
				cout << " " << c[3-i][3-j];
 		}
 		cout << endl;
	}
}