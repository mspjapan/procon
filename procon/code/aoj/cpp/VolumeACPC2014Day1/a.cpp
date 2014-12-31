#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double s[1500];
int main(){
	int n,m,h,im,c,cnt,t,sales,s_cnt;
	cin >> n >> m;
	t = m;
	c=cnt=s_cnt=0;
	for(int i=0;i<n;i++){
		scanf("%d:%d %d",&h,&im,&c);
		if(t>=h*60+im){
			sales+=c;
			cnt++;
		} else {
			if(cnt!=0){
				s[s_cnt++] = (double)sales/cnt;
			}
			sales = c;
			cnt = 1;
			t+=m;
			s_cnt++;
		}
	}
	if(cnt!=0){
		s[s_cnt++] = (double)sales/cnt;
	}
	int count = 0;
	for(int i=0;i<1500;i++){
		if(s[i]!=0){
			if(count == 0){
				printf("%.1lf",round(s[i]*10)/10);
			} else {
				printf(" %.1lf",round(s[i]*10)/10);
			}
			count++;
		}
	}
	cout << endl;
}