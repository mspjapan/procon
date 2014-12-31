#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
	string w,s,a,sentence;
	vector<string> vi;
	vector<string>::iterator ite;
	cin >> w;
	while(cin >> s && !(s=="END_OF_TEXT")){	
		transform(s.begin(),s.end(),s.begin(),::tolower);
		vi.push_back(s);
	}

	int sum = 0;
	ite = vi.begin();
	while(ite!=vi.end()){
		a = *ite;
		if(w==a){
			sum++;
		}
		ite++;
	}
	cout << sum << endl;
}