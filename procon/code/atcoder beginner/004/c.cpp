#include<iostream>
using namespace std;
int cards[6];
void init(){
	for(int i=0;i<6;i++)
		cards[i] = i;
}
void swap(int i){
	int temp,n,m;
	n = i%5;
	m = i%5+1;
	temp = cards[n];
	cards[n] = cards[m];
	cards[m] = temp;
}
bool check(){
	for(int i=0;i<6;i++){
		if(cards[i]!=i) return false;
	}
	return true;
}
int main(){
	init();
	int N,temp,n,m,i=0;
	cin >> N;
	N = N%30;
	for(int i=0;i<N;i++){
		swap(i);
	}
	for(int i=0;i<6;i++)
		cout << (cards[i]+1);
	cout << endl;
}