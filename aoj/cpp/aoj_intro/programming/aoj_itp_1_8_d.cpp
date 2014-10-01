#include<iostream>
#include<string>
using namespace std;

int main(){
	string p,s;
	cin >> s;
	cin >> p;
	s += s;
	if(s.find(p)!=string::npos)
		cout << "Yes"<<endl;
	else
		cout << "No"<<endl;
}