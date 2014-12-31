#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char ch;
	int sum=0;
	while(true){
		scanf("%c",&ch);
		if(ch=='\n'){
			cout << sum << endl;
			sum = 0;
		} else if(ch-'0'==0 && sum==0) {
			break;
		} else {
			sum += ch-'0';
		}
	}
}