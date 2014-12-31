#include<iostream>
using namespace std;

int main(){
	int N,NG1,NG2,NG3;
	cin >> N;
	cin >> NG1;
	cin >> NG2;
	cin >> NG3;
	if(N==NG1 || N==NG2 || N==NG3){
		cout << "NO" << "\n";
	} else {
		for(int i=0;i<100;i++){
			if(N-3==NG1 || N-3==NG2 || N-3==NG3){
				if(N-2==NG1 || N-2==NG2 || N-2==NG3){
					if(N-1==NG1 || N-1==NG2 || N-1==NG3){
						cout << "NO" << "\n";
						N=-1;
						break;
					}
					N--;
					continue;
				}
				N-=2;
				continue;
			}
			if(i<99){
				if(N<4){
					N=0;
				} else {
					N-=3;
				}
			} else {
				if(N<4){
					N=0;
				}
			}
		}

		if(N>0){
			cout << "NO" << "\n";
		} else if(N==0){
			cout << "YES" << "\n";
		}
	}
}