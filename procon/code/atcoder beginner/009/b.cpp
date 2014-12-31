#include<iostream>
#include<set>

using namespace std;
int main(){
	int N,temp;
	set<int> prices;
	set<int>::iterator it;
	cin >> N;
	while(N--){
		cin >> temp;
		prices.insert(temp);
	}
	it = prices.end();
	it--;
	it--;
	cout << *it << endl;
}