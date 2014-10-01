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

bool compareDice(Dice* dice1,Dice* dice2){
	return (dice1->fir == dice2->fir && dice1->sec == dice2->sec && dice1->thi == dice2->thi && dice1->fou == dice2->fou && dice1->fif == dice2->fif && dice1->six == dice2->six);
}

int main(){
	int fir_1,sec_1,thi_1,fou_1,fif_1,six_1;
	int fir_2,sec_2,thi_2,fou_2,fif_2,six_2;
	cin >> fir_1 >> sec_1 >> thi_1 >> fou_1 >> fif_1 >> six_1;
	cin >> fir_2 >> sec_2 >> thi_2 >> fou_2 >> fif_2 >> six_2;
	Dice dice_1 = {fir_1,sec_1,thi_1,fou_1,fif_1,six_1};
	Dice dice_2 = {fir_2,sec_2,thi_2,fou_2,fif_2,six_2};
	
	set_2face(&dice_1,dice_2.fir,dice_2.sec);
	if(compareDice(&dice_1,&dice_2)){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}