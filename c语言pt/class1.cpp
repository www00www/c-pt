//#include<iostream>
//using namespace std;
//
//class Tdata
//{
//public:
//	Tdata( );
//	int m = 0;
//	void fun(int t);
//	void f1(Tdata & s);
//};
//
//
//void Tdata::fun(int t)
//{
//	cout << t << endl;
//}
//
//void Tdata::f1(Tdata &s)
//{
//	s.m = 20;
//
//}
//
//Tdata::Tdata()
//{
//	cout << "123456" << endl;
//}
//
//class RG 
//{
//public:
//	int a, b;
//public:
//	RG(){ }
//	RG(int m) {
//		this->a = m;
//		cout << "111111111111111" << endl;
//	}
//	;
//	RG(int n, int k) {
//		this->a = n;
//		this->b = k;
//		cout << "22222222222222" << endl;
//	}
//
//	void fun();
//
//	RG cat( );
//
//	
//
//};
//
//class GK
//{
//public:
//	int a, b;
//	double c;
//	GK(int aa,int bb,double cc);
//	//GK(int m) { a = m; }
//	GK( ) { }
//	void show();
//	operator int();
//};
//
//GK::GK(int aa, int bb, double cc):a(aa),b(bb),c(cc){ }
//
//void GK::show()
//{
//	cout << a << "  " << b << "  " << c << endl;
//}
// 
//int main()
//{
//	//Tdata t ;
//	//cout << t.m << endl;
//	//t.fun(2);
//	//t.f1(t);
//	//cout << t.m << endl;
//	//Tdata *tt = new Tdata();
//	//RG a[3] = {1,2,3};
//	//RG b[3] = { RG(1),RG(2),RG(3) };
//	//RG c[3] = { RG(1,2),RG(2,3),RG(3,5) };
//	//RG d[2] = { RG(1,2),RG(2) };
//	//RG aa(d[0]);
//	//cout << aa.a << "  " << aa.b << endl;
//	//d[0].fun();
//	//d[1].fun();
//
//	//RG gg(1, 2);
//	//RG mtg = gg.cat();
//	GK gk,
//		gk1(10, 20, 0.2),
//		gk2(20, 30, 0.2);
//	gk = gk1 + gk2;
//	/*gk1 = 23;*/
//	//cout << it << endl;
//	//gk.show();  
//
//	while (1);
//}
//
//void RG::fun()
//{
//	cout << "บวบว" << endl;
//}
//
//RG RG::cat()
//{
//	RG g(20,30);
//	
//	return g;
//}
//
//GK::operator int()
//{
//	return this->a;
//}