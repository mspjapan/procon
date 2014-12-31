#include<iostream>
#include<vector>
using namespace std;
int a[101];
int main(){
	int num,n,mode=0;
	vector<int>v;
	vector<int>::iterator ite;
	while(cin >> num){
		a[num-1]++;
	}
	for(int i=0;i<100;i++){
		if(a[i]==mode)v.push_back(i);
		if(a[i]>mode){
			v.clear();
			v.push_back(i);
			mode=a[i];
		}
	}
	ite = v.begin();
	while(ite!=v.end()){
		n = *ite;
		cout << (n+1) << endl;
		ite++;
	}
}