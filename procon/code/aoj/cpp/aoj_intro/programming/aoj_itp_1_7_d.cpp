#include<cstdio>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
	int n,m,l,tmp;
	string str;
	cin >> n >> m >> l;cin.ignore();
	int m_1[110][110]={0};
	int m_2[110][110]={0};
	long r_m[110][110]={0};
	for(int i=0;i<n;i++){
		int j = 0;
		getline(cin,str);
		stringstream s(str);
		while(s >> tmp){
			m_1[i][j++] = tmp;
		}
	}
	for(int i=0;i<m;i++){
		int j = 0;
		getline(cin,str);
		stringstream s(str);
		while(s >> tmp){
			m_2[i][j++] = tmp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<l;k++){
				r_m[i][k] += m_1[i][j]*m_2[j][k];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			if(j==0)
				cout << r_m[i][j];
			else
				cout << ' ' << r_m[i][j];
		}
		cout << endl;
	}
}