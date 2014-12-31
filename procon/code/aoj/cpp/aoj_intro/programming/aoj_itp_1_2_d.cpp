#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	int minX,minY,maxX,maxY;
	minX = x-r,minY = y-r,maxX = x+r,maxY = y+r;
	if(minX < 0 || minY < 0 || maxX > W || maxY > H)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}