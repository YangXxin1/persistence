#include <iostream>

using namespace std;

class A
{
public:
	int _a;
};
class B : virtual  public A
{
public:
	int _b;
};
class C : virtual  public A
{
public:
	int _c;
};
class D : public B, public C
{
public:
	int _d;
};


int main()
{
	D d;
	//cout << sizeof(D) << endl;

	//cout << d._a << endl;
	//cout << d.B::_a << endl;
	//cout << d.C::_a << endl;
	d.B::_a = 1;
	d.C::_a = 2;

	d._b = 3;
	d._c = 4;
	d._d = 5;


	system("pause");
	return 0;
}