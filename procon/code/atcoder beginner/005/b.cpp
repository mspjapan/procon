#include<iostream>
#include<algorithm>
using namespace std;
int T[110];
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> T[i];
    }
    sort(T,T+N);
    cout << T[0] << endl;
}