#include<iostream>
#include<fstream>
using namespace std;
int num[1100];

void init(){
	for(int i=2;i<1000;i++){
		if(num[i]==0){
			for(int j=2*i;j<1000;j+=i)
				num[j]=1;
		} else {
			continue;
		}
	}
}

void solve(int n){
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(num[i]==0)cnt++;
	}
	cout<<cnt<<endl;
}
int main(){
	init();
	ifstream ifs("primenumber.txt");
	char str[256];
	while(ifs.getline(str,256)){
		solve(atoi(str));
	}
}