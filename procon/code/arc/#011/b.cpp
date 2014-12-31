#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	cin >> name;
	for(int i=0;i<name.size();i++)
		name[i] = tolower(name[i]);
	name[0] = toupper(name[0]);
	cout << name << "\n";
}