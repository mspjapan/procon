#include<iostream>
#include<string>
using namespace std;

bool match(const char ch){
	return (ch=='a'||ch=='t'||ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='r');
}

int main(){
	string S,T;
	cin >> S;
	cin >> T;
	int n,m;
	n = S.size();
	m = T.size();
	if(n!=m){
		cout << "You will lose" << endl;
	} else {
		for(int i=0;i<n;i++){
			if(S[i]==T[i]){
				continue;
			} else if(S[i]=='@' && match(T[i])) {
				S[i] = T[i];
			} else if(T[i]=='@' && match(S[i])) {
				T[i] = S[i];
			}
		} 
		if(S==T)
			cout << "You can win" << endl;
		else
			cout << "You will lose" << endl;
	}
}