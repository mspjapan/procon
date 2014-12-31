#include<iostream>
#include<algorithm>
using namespace std;

int num[110];
void init(){
	int count=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			num[count++]=i+j;
	}
	sort(num,num+100);
}

int binary_search(int a,int b, int n){
	int cnt=0;
	for(int i=0;i<100;i++){
		if(num[i]==n-a-b)cnt++;
		if(num[i]>n-a-b)return cnt;
	}
	return cnt;
}

int main(){
	init();
	int n,cnt;
	while(cin >> n){
		cnt=0;
		for(int a=0;a<10;a++){
			for(int b=0;b<10;b++){
				cnt += binary_search(a,b,n);
			}
		}
		cout << cnt << endl;
	}
}