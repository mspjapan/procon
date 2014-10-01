#include<iostream>
#include<cstdio>
using namespace std;
int area[10][10];

void paint(int x,int y){
	if(!(x < 0 || y < 0) && !(x > 9 || y > 9))
		area[x][y]++;
}

void drop(int x, int y, int size){
	if(int(size)>0){
		paint(x-1,y);paint(x,y-1);paint(x,y);paint(x,y+1);paint(x+1,y);
	}
	if(int(size)>1){	
		paint(x-1,y-1);paint(x+1,y-1);paint(x-1,y+1);paint(x+1,y+1);
	}
	if(int(size)>2){
		paint(x-2,y);paint(x+2,y);paint(x,y-2);paint(x,y+2);
	}
}

void count(){
	int ans=0,blank=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			ans = max(ans,area[i][j]);
			if(area[i][j]==0)blank++;
		}
	}
	cout << blank << endl;
	cout << ans << endl;
}

int main(){
	int x,y,size;
	while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
		drop(x,y,size);
	}
	count();
}