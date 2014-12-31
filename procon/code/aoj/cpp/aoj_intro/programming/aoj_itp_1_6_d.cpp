#include<cstdio>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
	int n,m,tmp;
	string str;
	cin >> n >> m;cin.ignore();
	int matrix[n+10][m+10],v[m+10],r_v[n+10];
	for(int i=0;i<n;i++){
		int j = 0;
		getline(cin,str);
		stringstream s(str);
		while(s >> tmp){
			matrix[i][j++] = tmp;
		}
		r_v[i] = 0;
	}
	for(int i=0;i<m;i++)
		cin >> v[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			r_v[i] += matrix[i][j]*v[j];
		}
	}
	for(int i=0;i<n;i++)
		cout << r_v[i] << endl;
}