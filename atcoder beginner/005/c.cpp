#include<iostream>
using namespace std;

int A[200],B[200];
int main(){
	int T,N,M,cnt=0;
	cin >> T;
	cin >> N;
	for(int i=0;i<N;i++)
		cin >> A[i];
	cin >> M;
	for(int i=0;i<M;i++)
		cin >> B[i];
	if(M > N){
		cout << "no" << endl;
	} else {
		for(int i=0;i<M;i++){
			if(cnt > N){
				cnt = -1;
				break;
			}
			while(B[i]-A[cnt] > T){
				cnt++;
			}
			cnt++;
		}
		if(cnt==N)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}