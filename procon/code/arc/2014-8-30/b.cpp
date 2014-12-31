#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int k,N,tmp;
	vector<pair<int,int> > x;
	vector<pair<int,int> >::iterator it;
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	cin >> N >> k;
	for(int i=0;i<N;i++){
		cin >> tmp;
		x.push_back(pair<int,int>(tmp,i));
	}
	for(int i=1;i<N+1;i++){
		it = x.begin();
		it+=i;
		sort(x.begin(),it);
		it = x.begin();
		for(int j=0;j<i;j++){
			if(j==k-1){
				cout << (it->second+1) << endl;
				break;
			}
			it++;
		}
	}
}