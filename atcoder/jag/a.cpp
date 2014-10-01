#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	string direction;
	int bunshi,bunbo;
	int n,w;
	while(cin >> direction && direction!="#"){
		n=0;
		bunshi=0;
		bunbo=1;
		for(int i=0;i<direction.size();i++){
			if(direction[direction.size()-1-i]=='w'){
				if(n>1){
					bunshi = bunshi*2+45;
					bunbo *=2;
				} else {
					bunshi += 90/pow(2,n);
				}
				n++;
			} else if(direction[direction.size()-1-i]=='n'&&n==0){
				n++;
			} else if(direction[direction.size()-1-i]=='n'){
				if(n>1){
					bunshi = bunshi*2-45;
					bunbo *=2;
				} else {
					bunshi -= 90/pow(2,n);
				}
				n++;
			}
		}
		if(bunbo==1){
			cout << bunshi << endl;
		} else {
			cout << bunshi << "/" << bunbo << endl;
		}
	}
}