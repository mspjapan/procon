#include<iostream>

using namespace std;
int main(){
	int m,f,r,score;
	while(cin >> m >> f >> r && !(m==-1&&f==-1&&r==-1)){
		if(m==-1||f==-1){
			cout << "F" << endl;
		} else {
			score=m+f;
			if(score >= 80)
				cout << "A";
			else if(score >=65)
				cout << "B";
			else if(score >= 50)
				cout << "C";
			else if(r >=50)
				cout << "C";
			else if(score>=30)
				cout << "D";
			else
				cout << "F";
			cout <<endl;
		}
	}
}