#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int t[100];
int main(){
	int N,min_1=0,min_2=0;
	cin >> N;
	for(int i=0;i<N;i++)
		cin >> t[i];
	sort(t,t+N,greater<int>());
	for(int i=0;i<N;i++){
		if(i==0){
			min_1 = t[i];
		} else {
			if(abs(min_1+t[i]-min_2)>abs(min_2+t[i]-min_1))
				min_2+=t[i];
			else
				min_1+=t[i];
		}
	}
	if(min_1 > min_2)
		cout << min_1 << endl;
	else
		cout << min_2 << endl;
}