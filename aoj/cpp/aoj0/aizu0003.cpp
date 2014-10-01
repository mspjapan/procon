#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,v[3];
    cin >> n;
    while(n--){
        cin >> v[0] >> v[1] >> v[2];
        sort(v,v+3);
        if(v[2]*v[2] == v[0]*v[0]+v[1]*v[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}