#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int s1,s2,d,rectangle=0,lozenge=0;
	while(scanf("%d,%d,%d",&s1,&s2,&d)!=EOF){
		if(s1*s1+s2*s2==d*d)
			rectangle++;
		else if(s1==s2)
			lozenge++;
	}
	cout << rectangle << endl << lozenge << endl;
}