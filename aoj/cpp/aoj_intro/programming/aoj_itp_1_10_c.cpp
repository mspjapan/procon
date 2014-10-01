#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double n,s[1100],sum,ave,sigma;
	while(cin >> n && n){
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		sum = 0;
		sigma = 0;
		for(int i=0;i<n;i++){
			sum+=s[i];
		}
		ave = sum/n;
		for(int i=0;i<n;i++){
			sigma += (s[i]-ave)*(s[i]-ave);
		}
		sigma = sqrt(sigma/n);
		printf("%.8lf\n",sigma);
	}
}