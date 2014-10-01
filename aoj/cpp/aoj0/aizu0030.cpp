#include<iostream>
using namespace std;
int count(int num,int max,int val){
	if(num==0)return 0;
	if(num==1){
		if(0<=val && val<=max)return 1;
		else return 0;
	}
	int cnt = 0;

	for(int i=1;i<=max;i++){
		if(val>=i){
			cnt += count(num-1,i-1,val-i);
		}
	}
	return cnt;
}

int main(){
	int n,s;
	while(cin >> n >> s && !(n==0&&s==0)){
		cout << count(n,9,s) << endl;
	}
}