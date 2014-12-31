#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int num[100];
int main(){
	for(int i=0;i<5;i++)
		cin >> num[i];
	sort(num,num+5,greater<int>());
	for(int i=0;i<5;i++){
		if(i==0)
			cout << num[i];
		else
			cout << " " << num[i];
	}
	cout << endl;
}