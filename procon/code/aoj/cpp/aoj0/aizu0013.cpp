#include<iostream>
#include<stack>
using namespace std;

int main(){
	int car;
	stack<int> stk;
	while(true){
		cin >> car;
		if(car==0){
			if(stk.empty()==true)break;
			else{
				cout << stk.top() << endl;
				stk.pop();
			}
		} else {
			stk.push(car);
		}
	}
}