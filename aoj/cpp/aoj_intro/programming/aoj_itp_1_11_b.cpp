#include<iostream>
#include<string>

using namespace std;
struct Dice{
	int fir;
	int sec;
	int thi;
	int fou;
	int fif;
	int six;
};

Dice* dice;
void w_roll(Dice* dice){
	int tmp;
	tmp = dice->fir;
	dice->fir = dice->thi;
	dice->thi = dice->six;
	dice->six = dice->fou;
	dice->fou = tmp;
}

void e_roll(Dice* dice){
	int tmp;
	tmp = dice->fir;
	dice->fir = dice->fou;
	dice->fou = dice->six;
	dice->six = dice->thi;
	dice->thi = tmp;
}

void n_roll(Dice* dice){
	int tmp;
	tmp = dice->fir;
	dice->fir = dice->sec;
	dice->sec = dice->six;
	dice->six = dice->fif;
	dice->fif = tmp;
}

void s_roll(Dice* dice){
	int tmp;
	tmp = dice->fir;
	dice->fir = dice->fif;
	dice->fif = dice->six;
	dice->six = dice->sec;
	dice->sec = tmp;
}

void set_2face(Dice* dice,int fir,int sec){
	if(dice->fir==sec){
		s_roll(dice);
	} else if(dice->thi==sec){
		w_roll(dice);
		s_roll(dice);
	} else if(dice->fou==sec){
		e_roll(dice);
		s_roll(dice);
	} else if(dice->fif==sec){
		s_roll(dice);
		s_roll(dice);
	} else if(dice->six==sec){
		n_roll(dice);
	}
	while(dice->fir!= fir){
		w_roll(dice);
	}
}

int main(){
	int fir,sec,thi,fou,fif,six,n,q_1,q_2;
	cin >> fir >> sec >> thi >> fou >> fif >> six;
	Dice dice = {fir,sec,thi,fou,fif,six};
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> q_1 >> q_2;
		set_2face(&dice,q_1,q_2);
		cout << dice.thi << endl;
	}
}