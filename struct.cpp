#include<iostream>
#include<string>
using namespace std;
struct Person{
	string name;
	int age;
	Person* next;
};

void init();
void disp();
int entry_ct();
Person* free_pos();
Person* get_ptr(int n);
void add(char* ss, int toshi);
void ins(char* ss, int toshi,int n);
void del(int n);

Person meibo[100];

int main(){
	init();
	add("田中",10);
	add("井上",20);
	disp();

	
	del(1);
	disp();
}

void init(){
	for(int i=0;i<100;i++){
		meibo[i].age = -1;
		meibo[i].next = 0;
	}
}

void disp(){
	for(Person* wp=meibo[0].next;wp!=0;wp=wp->next){
		cout << wp->name << ":"<< wp->age << " → ";
	}
	cout << "(end)" << endl;
}

int entry_ct(){
	int ct=0;
	for(Person* wp=meibo[0].next;wp!=0;wp=wp->next)
		ct++;
	return ct;
}

Person* free_pos(){
	for(int i=1;i<100;i++){
		if(meibo[i].age == -1) return &meibo[i];
	}
	return 0;
}

Person* get_ptr(int n){
	int ct =0;
	Person* wp = meibo;
	while(wp->next!=0){
		if(++ct == n)return wp;
		wp=wp->next;
	}
	return wp;
}

void add(char* ss, int toshi){
	ins(ss,toshi,9999);
}

void ins(char* ss,int toshi, int n){
	Person* freep,*insp;
	int last;
	freep = free_pos();
	if(freep==0)
		return;
	freep->name = ss;
	freep->age = toshi;
	last = entry_ct();
	if(n > last) n = last+1;
	insp = get_ptr(n);
	freep->next = insp->next;
	insp->next = freep;
}

void del(int n){
	Person *delp,*wp;
	int last;
	if(n < 1)return;
	last = entry_ct();
	if(n > last)
		n = last;
	delp = get_ptr(n);
	delp->next->name = "";
	delp->next->age = -1;

	wp = delp->next->next;
	delp->next = wp;
}