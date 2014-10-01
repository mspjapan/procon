#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string filename = "AegeanSea/AegeanSea1.csv";
	ifstream file(filename);
	vector<vector<string> > values;
	string str;
	int p;
	while(getline(file,str)){
		vector<string> inner;
		while((p=str.find(","))!=str.npos){
			inner.push_back(str.substr(0,p));
			str = str.substr(p+2);
		}
		inner.push_back(str);
		values.push_back(inner);
	}
	for(int i=0;i<values.size();i++){
		for(int j=0;j<values[i].size();j++){
			cout << values[i][j] << endl;
		}
		cout << endl;
	}
}