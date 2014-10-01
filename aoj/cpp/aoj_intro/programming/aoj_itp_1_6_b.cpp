#include<iostream>
using namespace std;
int main(){
	int n,rank;
	int s[100],h[100],c[100],d[100];
	char trump;
	for(int i = 0;i<100;i++)
		s[i]=h[i]=c[i]=d[i]=0;
	cin >> n;
	for(int j=0;j<n;j++){
		cin >> trump >> rank;
		if(trump == 'S')
			s[rank-1] = 1;
		if(trump =='H')
			h[rank-1] = 1;
		if(trump =='C')
			c[rank-1] = 1;
		if(trump=='D')
			d[rank-1] = 1;
	}

	for(int i=0;i<13;i++)
		if(s[i]==0)
			cout << "S " << i+1 << endl;
	for(int i=0;i<13;i++)
		if(h[i]==0)
			cout << "H " << i+1 << endl;
	for(int i=0;i<13;i++)
		if(c[i]==0)
			cout << "C " << i+1 << endl;
	for(int i=0;i<13;i++)
		if(d[i]==0)
			cout << "D " << i+1 << endl;
}