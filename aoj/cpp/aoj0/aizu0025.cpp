#include<iostream>
using namespace std;
int a[5],b[5],hit,blow;
int main(){
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
		hit = blow = 0;
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[i] == b[j]){
					if(i==j)hit++;
					else blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
}