#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void eulur(int n);

int main(){
	int n;
	cin >> n;
	eulur(n);
}

void eulur(int n){
	double p,ans;
	vector<int> v;
	vector<int>::iterator ite;
	ans = n;
	for(int i=2;i<=sqrt((double)ans);){
        if(n%i==0){
            if(find(v.begin(),v.end(),i)==v.end())
            	v.push_back(i);
            n/=i;
        } else i++;
    }
    if(n!=1)v.push_back(n);
    ite = v.begin();
    while(ite!=v.end()){
    	p = *ite;
    	ans *=(1-1/p);
    	ite++;
    }
    cout << (int)ans << endl;
}