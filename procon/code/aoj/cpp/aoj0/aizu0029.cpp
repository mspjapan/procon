#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

vector<pair<int, string> > data;
void findStr(string str){
	vector<pair<int,string> >::iterator ite;
	ite = data.begin();
	while(ite!=data.end()){
		if(ite->second==str){
			ite->first++;
			return;
		}
		ite++;
	}
	data.push_back(pair<int,string>(1,str));
}

int main(){
	int cnt,temp,m;
	string str,s,m_str;
	getline(cin,str);
	for(int i=0;i<str.size();i++)
		str[i] = tolower(str[i]);
	istringstream iss(str);
	m = 0;
	while(iss >> s){
		int pos = 0;
		temp = 0;
		if(m<s.size()){
			m = s.size();
			m_str = s;
		}
		findStr(s);
	}
	sort(data.begin(),data.end(),greater<pair<int,string> >());
	vector<pair<int,string> >::iterator it;
	it = data.begin();
	cout << it->second << " " << m_str << endl;
}