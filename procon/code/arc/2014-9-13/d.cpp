#include<iostream>
using namespace std;
#define MAX_V 100010
bool node[MAX_V][MAX_V];
bool used_node[MAX_V];

void solve(int a,int b,int cnt);
//a->bまでの経路長を計算しておく
void solve(int a,int b,int cnt){
	for(int i=0;i<MAX_V;i++){
		if(!used_node[i]){
			if(node[a][i]&&i==b){
				cout << ++cnt << endl;
			} else if(node[a][i]){
				cnt++;
				used_node[i]=true;
				solve(i,b,cnt);
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	int N,Q,x,y,a,b,cnt;
	cin >> N;
	for(int i=0;i<N-1;i++){
		cin >> x >> y;
		node[x-1][y-1]=true;
		node[y-1][x-1]=true;
	}
	cin >> Q;
	for(int i=0;i<Q;i++){
		cin >> a >> b;
		cnt = 0;
		solve(a,b,cnt);
	}
}