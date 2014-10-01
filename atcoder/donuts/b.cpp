#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
	int n,cnt=0;
	ll N;
	cin >> N;
	n = N/7;
	for(int i=0;i<n;i++){
		string num = to_string((i+1)*7);
		if(num.find("0")!=string::npos)continue;
		if(num.find("8")!=string::npos)continue;
		if(num.find("9")!=string::npos)continue;
		cnt++;
	}
	cout << cnt << endl;
}