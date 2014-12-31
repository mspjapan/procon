#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
	string str;
	ll b,num;
	cin >> str;
	cin >> b;
	num = str.size();
	while(b>num)
		b-=num;
	cout << str[b-1] << endl;
}