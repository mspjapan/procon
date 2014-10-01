#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,sum_a,sum_b;
	string a,b;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a.compare(b) > 0){
			sum_a += 3;
		} else if(a.compare(b) < 0){
			sum_b += 3;
		} else {
			sum_a++;
			sum_b++;
		}
	}
	cout << sum_a << " " << sum_b << endl;
}