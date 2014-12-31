#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string str,p,order;
    int q,a,b;     
     
    cin>>str;
    cin>>q;
    for(int i=0;i<q;++i){
        cin>>order;
        cin>>a>>b;
         
        if(order=="print"){
            cout<<str.substr(a,b-a+1)<<endl;
        }else if(order=="reverse"){
            reverse(&(str[a]), &(str[b+1]));
        }else if(order=="replace"){
            cin>>p;
            for(int j=0;j<b-a+1;++j){
                str[a+j] = p[j];
            }
        }
    }
}