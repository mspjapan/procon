#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	string n;
	cin >> n;
	reverse(n.begin(),n.end());
	long odd,even;
	odd = even = 0;
	for(int i=0;i<n.size();i++){
		int x = n[i]-'0';
		if(i%2==1){
			even += x;
		} else {
			odd += x;
		}
	}
	cout << even << " " << odd << endl;
}