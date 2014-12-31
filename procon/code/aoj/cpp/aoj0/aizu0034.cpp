#include<iostream>
#include<cstdio>
using namespace std;

int l[10];
int main(){
	double meet;
	int j,v1,v2,t_l,sum;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)!=EOF){
		sum=0,t_l=0,j=0;
		for(int i=0;i<10;i++)
			t_l+=l[i];

		meet = t_l*v1/(v1+v2);

		while(sum<meet){
			sum+=l[j++];
		}
		cout << j << endl;
	}	
}