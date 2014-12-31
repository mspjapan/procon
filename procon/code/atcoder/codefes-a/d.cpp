#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;
typedef long long ll;
int used[10],used2[10];
int main(){
	string A,B="",Bplus="",Bminus="";
	int K,cnt=0,diff=0,n=0;
	ll d=0,dplus=0,dminus=0;
	bool flag = false;

	cin >> A >> K;
	for(int i=0;i<A.size();i++)
		used[A[i]-'0']=1;
	for(int i=0;i<10;i++)
		cnt += used[i];
	if(cnt <= K){
		cout << 0 << endl;
	} else {
		while(K--){
			if(K==0&&n==0){
				ostringstream oss;
				oss << A[n];
				for(int i=0;i<A.size();i++)
					B+=oss.str();
				
				oss.str("");
				oss.clear(stringstream::goodbit);
				oss << (A[n]+1-'0');
				for(int i=0;i<A.size();i++)
					Bplus+=oss.str();

				oss.str("");
				oss.clear(stringstream::goodbit);
				oss << (A[n]-1-'0');
				for(int i=0;i<A.size();i++)
					Bminus+=oss.str();
				n=A.size();
				flag = true;
				break;
			} else {
				ostringstream oss;
				oss << A[n];
				B+=oss.str();
				used2[A[n]-'0']=1;
				while(A[n]==A[n+1]){
					B+=oss.str();
					n++;
				}
				n++;
			}
		}
		while(n!=A.size()){
			diff=9999;
			for(int i=0;i<10;i++){
				if(used2[i]==1){
					if(abs(diff-A[n]+'0')>abs(i-A[n]+'0')) diff = i;
				}
			}
			ostringstream oss;
			oss << diff;
			B+=oss.str();
			n++;
		}
		d=abs(stol(B)-stol(A));
		if(flag){
			dplus=abs(stol(Bplus)-stol(A));
			dminus=abs(stol(Bminus)-stol(A));

			if(d>dplus) d=dplus;
			if(d>dminus)d=dminus;
		}
		cout << d << endl;
	}
}