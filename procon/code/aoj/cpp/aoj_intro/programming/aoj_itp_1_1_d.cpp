#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int s;
	int h,m;
	h = m = 0;
	scanf("%d",&s);
	while(s >= 60){
		s-=60;
		m++;
	}
	while(m >= 60){
		m-=60;
		h++;
	}
	cout << h << ":" << m << ":" << s << endl;
}