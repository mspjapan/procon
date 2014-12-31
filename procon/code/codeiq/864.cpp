#include<iostream>
using namespace std;

class A{
private:
	short a,b;
public:
	short Calculate(short a,short b){return a+b;}
};

class B{
private:
	short a,b;
public:
	short Calculate(short a,short b){return a-b;}
};

class C{
private:
	short a,b;
public:
	short Calculate(short a,short b){return a*b;}
};

class D{
private:
	short a,b;
public:
	short Calculate(short a,short b){return a/b;}
};

class E{
private:
	short a,b;
public:
	short Calculate(short a,short b){return a+b+5;}
};

class Z{
private:
	A a;
	B b;
	C c;
	D d;
	E e;
public:
template <typename T> short Calculate(short a, short b){
	T t;
	t.Calculate(a,b);
}
};

int main(){
	Z z;
	A a;
	cout << z.Calculate<A>(1,2);
}