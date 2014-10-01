#include<iostream>
#include<string>
using namespace std;

int main(){
	string str,sub_str;
	int n,h;
	while(cin >> str && !(str=="-")){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> h;
			sub_str = str.substr(0,h);
			str = str.substr(h);
			str += sub_str;
		}
		cout << str << endl;
	}
}