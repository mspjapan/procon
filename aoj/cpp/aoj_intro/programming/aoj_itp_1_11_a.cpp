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


int main(){
	int fir,sec,thi,fou,fif,six;
	string op;
	cin >> fir >> sec >> thi >> fou >> fif >> six;
	cin >> op;
	Dice dice = {fir,sec,thi,fou,fif,six};
	for(int i=0;i<op.size();i++){
		switch(op[i]){
			case 'S':
				s_roll(&dice);
				break;
			case 'N':
				n_roll(&dice);
				break;
			case 'W':
				w_roll(&dice);
				break;
			case 'E':
				e_roll(&dice);
				break;
			default:
				break;
		}
	}
	cout << dice.fir <<endl;
}