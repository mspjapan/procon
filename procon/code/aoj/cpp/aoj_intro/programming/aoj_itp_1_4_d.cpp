//n 個の整数 ai(i=1,2,...n)を入力し、それらの最小値、最大値、合計値を求めるプログラムを作成してください。
#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int i,n;
	long tmp,sum;
	string str;
	while(cin >> n){
		cin.ignore();
		getline(cin,str);
		stringstream s(str);
		i=sum=0;
		int arr[n];
		while(s >> tmp){
			arr[i] = tmp;
			sum += tmp;
			i++;
		}
		sort(arr,arr+n);
		cout << arr[0] << " " << arr[n-1] << " " << sum << endl;
	}
}