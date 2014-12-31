#include<iostream>
#include<cstdio>
using namespace std;

int dots[100];
void init(){
	for(int i=0;i<100;i++)
		dots[i] = i;
}
int main(){
	init();
	int w,n,a,b,temp;
	cin >> w;
	cin >> n;
	while(n--){
		scanf("%d,%d",&a,&b);
		temp = dots[a-1];
		dots[a-1] = dots[b-1];
		dots[b-1] = temp;
	}
	for(int i=0;i<w;i++)
		cout << (dots[i]+1) << endl;
}