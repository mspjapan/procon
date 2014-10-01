#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int rate[4001];
int main(){
	int N,K;
	double my_rate=0;
	cin >> N >> K;
	for(int i=0;i<N;i++)
		cin >> rate[i];
	sort(rate,rate+N);
	for(int i=N-K;i<N;i++){
		my_rate = (my_rate+rate[i])/2;
	}
	printf("%.9lf\n",my_rate);
}