#include<iostream>
#include<cmath>
using namespace std;
int numbers[10000];
void init(){
	for(int i=2;i<sqrt(10000);i++){
		if(numbers[i]==0){
			for(int j=2*i;j<10000;j+=i)
				numbers[j]=0;
		}
	}
}
int check(int[] n){
	int cnt=0;
	
}
void solve(){

}
int main(){
	init();
	solve();
}