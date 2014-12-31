#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
	int n,tmp;
	double sum1,sum2,sum3,sum_i;
	sum1 = sum2 = sum3 = sum_i = 0;
	vector<int> vx,vy;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		vx.push_back(tmp);
	}
	for(int i=0;i<n;i++){
		cin >> tmp;
		vy.push_back(tmp);
	}

	for(int i=0;i<n;i++){
		sum1 += abs(vx[i]-vy[i]);
		sum2 += (vx[i]-vy[i])*(vx[i]-vy[i]);
		sum3 += abs(vx[i]-vy[i])*abs(vx[i]-vy[i])*abs(vx[i]-vy[i]);
		sum_i = max(abs(vx[i]-vy[i]),sum_i);
	}
	printf("%.8lf\n",sum1);
	printf("%.8lf\n",sqrt(sum2));
	printf("%.8lf\n",pow(sum3,1.0/3.0));
	printf("%.8lf\n",sum_i);
}