#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef pair<string,int> m_pair;
vector<pair<string,int> > v;

bool sort_pred(const m_pair& left, const m_pair& right){
	return left.second > right.second;
}
void upsert(string str){
	vector<pair<string,int> >::iterator it;
	it = v.begin();
	while(it!=v.end()){
		if(it->first==str){
			it->second++;
			return;
		}
		it++;
	}
	v.push_back(pair<string,int>(str,0));
}
int main(){
	int n;
	string s;
	vector<pair<string,int> >::iterator p;
	cin >> n;
	while(n--){
		cin >> s;
		upsert(s);
	}
	sort(v.begin(),v.end(),sort_pred);
	p = v.begin();
	cout << p->first << endl;
}