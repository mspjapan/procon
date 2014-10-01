#include<iostream>
#include<vector>
#include<functional>
using namespace std;

int main(){
	int N,M,x,y;
	vector<pair<int,int> >people;
	vector<pair<int,int> >::iterator it;
	for(int i=0;i<M;i++){
		cin >> x >> y;
		people.push_back(pair<int,int>(x,y));
	}
	
}