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

Dice dice[110];
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
	int count = 0;
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
		count++;
		if(count>6)
			break;
	}
}

bool compareDice(Dice* dice1,Dice* dice2){
	return (dice1->fir == dice2->fir && dice1->sec == dice2->sec && dice1->thi == dice2->thi && dice1->fou == dice2->fou && dice1->fif == dice2->fif && dice1->six == dice2->six);
}

int main(){
	int fir,sec,thi,fou,fif,six,n;
	cin >> n;
	for(int i=0;i<n;i++){
		fir=sec=thi=fou=fif=six=0;
		cin >> fir >> sec >> thi >> fou >> fif >> six;
		dice[i].fir = fir;
		dice[i].sec = sec;
		dice[i].thi = thi;
		dice[i].fou = fou;
		dice[i].fif = fif;
		dice[i].six = six;
		set_2face(&dice[i],dice[0].fir,dice[0].sec);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(compareDice(&dice[i],&dice[j])){
				cout << "No" << endl;
				goto end;
			}
		}
	}
	cout << "Yes" << endl;
	end:
	;
}