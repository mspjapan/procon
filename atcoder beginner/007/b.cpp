#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin >> str;
	if(str=="a")
		cout << "-1" << endl;
	else {
		if(str.size()==1)
			cout << static_cast<char>(str[0]-1) << endl;
		else{
			for(int i=0;i<str.size()-1;i++)
				cout << str[0];
			cout << endl;
		}
	}
}