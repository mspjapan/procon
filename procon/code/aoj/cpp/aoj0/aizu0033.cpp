#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
	int N,ball;
	queue<int> stk;
	stack<int> b,c;
	cin >> N;
	while(N--){
		for(int i=0;i<10;i++){
			cin >> ball;
			stk.push(ball);
		}
		while(!stk.empty()){
			if(b.empty()){
				b.push(stk.front());
				stk.pop();
			} else {
				if(b.top()<stk.front()){
					b.push(stk.front());
					stk.pop();
				} else {
					if(c.empty()){
						c.push(stk.front());
						stk.pop();
					} else {
						if(c.top()<stk.front()){
							c.push(stk.front());
							stk.pop();
						} else {
							cout << "NO" << endl;
							break;
						}
					}
				}
			}
		}
		if(stk.empty())
			cout << "YES" << endl;
		while(!stk.empty())
			stk.pop();
		while(!b.empty())
			b.pop();
		while(!c.empty())
			c.pop();
	}
}