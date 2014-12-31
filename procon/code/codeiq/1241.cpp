#include<iostream>

using namespace std;
int main(){
  int cnt,two,other,temp,num,p_n[] = {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293};
  cnt = 0,two=0,other=0;
  for(int i=2;i<=305;i++){
    num=i,temp=i;
    while(temp%2==0){
      two++;
      temp/=2;
    }
    if(temp!=1){
      int size = sizeof(p_n)/sizeof(p_n[0]);
      for(int j=0;j<size;j++){
        if(temp%p_n[j]==0){
          other++;
          temp/=p_n[j];
        }
        if(temp==1)break;
      }
    }
    if(two==other)cout << num << endl;
  }
}
