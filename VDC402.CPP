#include<iostream.h>
class A	{
	public:
		A()	{
			cout<<"A: khong tham so \n";
			}
		A(int	a)	{
			cout<<"A: tham so kieu int \n";
			}
	};
class B:public A{
	public:
		B(int a)	{
			cout<<"B: tham so kieu int \n";
			}
	};
class C:public A{
	public:
		C(int a) : A(a)	{
			cout<<"C: tham so kieu nguyen \n";}
	};
void main()	{
	B	b1(1);
	C	c1(1);
	}