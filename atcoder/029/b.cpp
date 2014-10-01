#include<iostream>
using namespace std;
void solve(int x,int y,int x_i,int y_i){
	int temp,temp_i;
	bool flag=false;
	if(!(y==max(x,y))){
		temp = x;
		x = y;
		y = temp;
	}
	if(!(y_i==max(x_i,y_i))){
		temp_i = x_i;
		x_i = y_i;
		y_i = temp_i;
	}

	if(x_i<x&&y_i<y){
		cout << "YES" <<endl;
	} else {
		if((-x_i*x_i+y_i*y_i)>(-x*x+y*y))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
int main(){
	int x,y,n,x_i,y_i;
	cin >> x_i >> y_i;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x >> y;
		solve(x,y,x_i,y_i);
	}
}