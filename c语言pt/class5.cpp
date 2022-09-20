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

 虚基类的初始化与一般的多继承的初始化在语法上是一样的，但构造函数的调用顺序不同。在使用虚基类机制时应该注意以下几点：

* 如果在虚基类中定义有带形参的构造函数，并且没有定义默认形式的构造函数，则整个继承结构中，所有直接或间接的派生类都必须在构造函数的成员初始化列表中列出对虚基类构造函数的调用，
  以初始化在虚基类中定义的数据成员。
* 建立一个对象时，如果这个对象中含有从虚基类继承来的成员，则虚基类的成员是由最远派生类的构造函数通过调用虚基类的构造函数进行初始化的。该派生类的其他基类对虚基类构造函数的调用
  都被自动忽略。
* 若同一层次中同时包含虚基类和非虚基类，应先调用虚基类的构造函数，再调用非虚基类的构造函数，最后调用派生类构造函数。
* 对于多个虚基类，构造函数的执行顺序仍然是先左后右，自上而下。
* 若虚基类由非虚基类派生而来，则仍然先调用基类构造函数，再调用派生类的构造函数。

1.0 virtual不能只写一部分,否则任然会有二义性问题.
2.0 对于最远的理解,应该是先进性初始化虚基类的那个.	 
————————————————
版权声明：本文为CSDN博主「白鳯」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_44368437/article/details/117563488
