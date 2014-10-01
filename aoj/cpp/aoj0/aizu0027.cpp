#include<iostream>
#include<ctime>
using namespace std;
void wday(int wd){
	switch(wd){
		case 0:
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		default:
			break;
	}
}

void calc(int m,int d){
	while(m!=0){
		m--;
		if(m==0){
		} else if(m==2){
			d+=29;
		} else if(m==4 || m==6 || m==9 || m==11){
			d+=30;
		} else{
			d+=31;
		}
	}
	d+=3;
	d%=7;
	wday(d);
}

int main(){
	int m,d;
	while(cin >> m >> d && !(m==0&&d==0)){
		calc(m,d);
	}
}