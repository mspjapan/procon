#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int dir_i,dis_i,w;
	double dir_b,dis_b;
	string dir_s;
	cin >> dir_i >> dis_i;
	dir_b = dir_i/10;
	if(dir_b>=326.25&&dir_b<348.75){
		dir_s="NNW";
	} else if(dir_b>=303.75&&dir_b<326.25){
		dir_s="NW";
	} else if(dir_b>=281.25&&dir_b<303.75){
		dir_s="WNW";
	} else if(dir_b>=258.75&&dir_b<281.25){
		dir_s="W";
	} else if(dir_b>=236.75&&dir_b<258.75){
		dir_s="WSW";
	} else if(dir_b>=213.75&&dir_b<236.25){
		dir_s="SW";
	} else if(dir_b>=191.25&&dir_b<213.75){
		dir_s="SSW";
	} else if(dir_b>=168.75&&dir_b<191.25){
		dir_s="S";
	} else if(dir_b>=146.25&&dir_b<168.75){
		dir_s="SSE";
	} else if(dir_b>=123.75&&dir_b<146.25){
		dir_s="SE";
	} else if(dir_b>=101.25&&dir_b<123.75){
		dir_s="ESE";
	} else if(dir_b>=78.75&&dir_b<101.25){
		dir_s="E";
	} else if(dir_b>=56.25&&dir_b<78.75){
		dir_s="ENE";
	} else if(dir_b>=33.75&&dir_b<56.25){
		dir_s="NE";
	} else if(dir_b>=11.25&&dir_b<33.75){
		dir_s="NNE";
	} else {
		dir_s="N";
	}

	dis_b=dis_i/6;
	dis_b=round(dis_b)/10;
	if(dis_b>=20.8&&dis_b<=24.4){
		w=9;
	} else if(dis_b>=17.2&&dis_b<=20.7){
		w=8;
	} else if(dis_b>=13.9&&dis_b<=17.1){
		w=7;
	} else if(dis_b>=10.8&&dis_b<=13.8){
		w=6;
	} else if(dis_b>=8.0&&dis_b<=10.7){
		w=5;
	} else if(dis_b>=5.5&&dis_b<=7.9){
		w=4;
	} else if(dis_b>=3.4&&dis_b<=5.4){
		w=3;
	} else if(dis_b>=1.6&&dis_b<=3.3){
		w=2;
	} else if(dis_b>=0.3&&dis_b<=1.5){
		w=1;
	} else if(dis_b>=0.0&&dis_b<=0.2){
		w=0;
	}
	if(w==0)
		dir_s="C";
	cout << dir_s << " " << w <<endl;
}