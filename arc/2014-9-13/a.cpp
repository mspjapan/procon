#include<iostream>
using namespace std;

int main(){
	int a,b,cnt=0;
	cin >> a;
	cin >> b;
	while((a+cnt)%b!=0){
		cnt++;
	}
	cout << cnt << endl;
}