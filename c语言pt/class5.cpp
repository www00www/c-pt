#include <iostream>
#include <string>
using namespace std;

//class A
//{
//public:
//	A()
//	{
//		cout << "A::A( )" << endl;
//	}
//
//};

class Base       //:public A
{
public:
	int a;
public:
	Base() 
	{
		a = 5;
		cout << "Base a = " << a << endl;
	}
};

class Base1 : public virtual Base {
public:
	Base1()
	{
		a = a + 10;
		cout << "Base1 a = " << a << endl;
	}
};

class Base2 : public virtual Base {
public:
	Base2() 
{
		a = a + 20;
		cout << "Base2 a = " << a << endl;
	}
};

class Derived : public Base1,public Base2
{
public:
	Derived() {
		cout << "Base1::a = " << Base1::a << endl;
		cout << "Base2::a = " << Base2::a << endl;
	}
};

int main() {
	Derived obj;
	cout << obj.a << endl;
	while (1);
}

/*

Base a = 5
Base1 a = 15
Base a = 5
Base2 a = 25
Base1::a = 15
Base2::a = 25

*/

//Base a = 5
//Base1 a = 15
//Base2 a = 35
//Base1::a = 35
//Base2::a = 35

