#include<iostream>
#include<string>
using namespace std;

int main(){
	string line;
	cin >> line;
	for(int i=0;i<line.size();i++){
		if(line[i]!='a' && line[i]!='i' && line[i]!='u' && line[i]!='e' && line[i]!='o')
			cout << line[i];
	}
	cout << endl;
}