#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int i,n;
	long tmp;
	string str;
	while(cin >> n){
		cin.ignore();
		getline(cin,str);
		stringstream s(str);
		i=0;
		int arr[n];
		while(s >> tmp){
			arr[i++] = tmp;
		}
		cout << arr[n-1];
		for(int j=1;j<n;j++){
			cout << " " << arr[n-1-j];
		}
		cout << endl;
	}
}