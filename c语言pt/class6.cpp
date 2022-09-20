//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int num;
//	A( ) { }
//	A(int a)
//	{
//		num = a;
//		cout << "A::num = " << num << endl;
//	}
//};
//
//class B1:public A
//{
//public:
//	int numB1;
//	B1(int a):A(a + 10)
//	{	
//		numB1 = a;
//		cout << "B1::num = " << numB1 << endl;
//	}
//};
//
//class B2 :public A
//{
//public:
//	int numB2;
//	B2(int a) :A(a + 20)
//	{
//		numB2 = a;
//		cout << "B2::num = " << numB2 << endl;
//	}
//};
//
//class C :public B1, public B2
//{
//public:
//	int numC;
//	C(int a) :B1(a + 20),B2(a + 10)
//	{
//		numB2 = a;
//		cout << "B2::num = " << numB2 << endl;
//	}
//};
//
//int main()
//{ 
//	C c(10);
//	cout << c.num << endl;
//
//
//
//
//
//	while (1);
//}