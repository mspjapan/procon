#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
	int r,c,tmp;
	string str;
	cin >> r >> c;cin.ignore();
	int table[101][101] = {0};
	for(int i=0;i<r;i++){
		int j = 0;
		getline(cin,str);
		stringstream s(str);
		while(s >> tmp){
			table[i][j++] = tmp;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			table[i][c] += table[i][j];
		}
	}
	for(int i=0;i<c+1;i++){
		for(int j=0;j<r;j++){
			table[r][i] += table[j][i];
		}
	}
	for(int i=0;i<r+1;i++){
		for(int j=0;j<c+1;j++){
			if(j==0)
				cout << table[i][j];
			else
				cout << ' ' << table[i][j];
		}
		cout << endl;
	}
}