#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	string s1,s2,s3;
	cin >> n;
	while(n--){
		s1=s2=s3="";
		cin >> s1 >> s2;
		m = max(s1.size(),s2.size());
		while(s1.size()<m)s1='0'+s1;
		while(s2.size()<m)s2='0'+s2;
		int c=0;
		for(int i=m-1;i>=0;i--){
			char ch=((s1[i]-'0')+(s2[i]-'0')+c)%10+'0';
			c = ((s1[i]-'0')+(s2[i]-'0')+c)/10;
			s3+=ch;
		}
		if(c)s3+=c+'0';
		reverse(s3.begin(),s3.end());
		if(s3.size()>80)
			cout << "overflow" << endl;
		else
			cout << s3 << endl;
	}
}