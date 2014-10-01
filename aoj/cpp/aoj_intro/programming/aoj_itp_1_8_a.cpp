#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char ch;
	while(true){
		scanf("%c",&ch);
		if(islower(ch))
			printf("%c",toupper(ch));
		else if(isupper(ch))
			printf("%c",tolower(ch));
		else
			cout << ch;
		if(ch == '\n')
			break;
	}
}