#include<iostream>
#include<string>
using namespace std;

int main(){
	string line;
	while(getline(cin,line)){
		while(line.find("the")==line.npos && line.find("this")==line.npos && line.find("that")==line.npos){
			for(int i=0;i<line.size();i++){
				if(line[i] >= 'a' && line[i] <= 'y')
					line[i]++;
				else if(line[i]=='z')
					line[i]='a';
			}
		}
		cout << line << endl;
	}
}