#include<iostream>
#include<vector>
using namespace std;
double plus[40][40],minus[40][40];
typedef long long ll;

int main(){
	int N,D,X,Y,x,y;
	cin >> N >> D;
	cin >> X >> Y;

	if(D==0 || X%D != 0 || Y%D != 0){
		cout << 0 << endl;
		return 0;
	}

	x = X/D;
	y = Y/D;
	if(x+y>N){
		cout << 0 << endl;
		return 0;
	}

	if(((ll)x+y+N)%2!=0){
		cout << 0 << endl;
		return 0;
	}
	vector<long double> pv;
	for(int )
	for(int i=0;i<N;i++){
		for(int j=0;j<30;j++){
			for(int k=0;k<30;k++){
				calc_minus(i,j);
				calc_plus(i,j);
			}
		}
	}
}