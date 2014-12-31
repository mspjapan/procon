#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char ch;
	int ans[30]={0};
	while(cin>>ch){
		if(isupper(ch))
			ch=tolower(ch);
		ans[ch-'a']++;
	}
	for(int i=0;i<26;i++)
		printf("%c : %d\n",i+'a',ans[i]);
}