#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1,str2;
	cin >> str1;
	cin >> str2;
	if(str1.length() == str2.length()){
		int diff = 0;
		int d[10] = {0};
		int e[10] = {0};
		int j = 0;
		int num=0;
		int sum=0;
		int flag = 0;
		for(int i=0;i<str1.length();i++){
			if(str1[i]!=str2[i]){
				diff++;
				d[j++] = i;
			}
		}
		if(diff > 6){
			cout << "NO" << endl;
		} else if(diff==6){
			for(int k=0;k<j;k++){
				for(int l=0;l<j;l++){
					if(str1[k]==str2[l]&&str1[l]==str2[k])
						flag++;
				}
			}
			if(flag>2)
				cout << "YES" <<endl;
			else
				cout << "NO" << endl;
		} else if(diff==5){
			for(int k=0;k<j;k++){
				for(int l=0;l<j;l++){
					if(str1[k]==str2[l]&&str1[l]==str2[k])
						flag = 1;
				}
			}
			if(flag)
				cout << "YES" <<endl;
			else
				cout << "NO" << endl;
		} else {
			for(int k=0;k<j;k++){
				for(int l=0;l<j;l++){
					if(str1[k]==str2[l])
						sum++;
				}
			}
			if(sum==j)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;		
		}
	} else {
		cout << "NO" << endl;
	}
}