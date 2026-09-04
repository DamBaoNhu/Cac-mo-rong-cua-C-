#include <iostream.h>
#include <math.h>
class Complex	{
	private:
		double Real, Imaginary;
	public:
		Complex(); // Constructor mac dinh
		Complex(double R,double I);
		Complex(const Complex &c);
		void Input();//Nhap so phuc
		void Print(); // Hien thi so phuc
	};
Complex::Complex()	{
	Real = 0.0;
	Imaginary = 0.0;
	}

Complex::Complex(double R,double I)	{
	Real = R;
	Imaginary = I;
	}
Complex::Complex(const Complex &c)	{
	Real=c.Real;
	Imaginary=c.Imaginary;
	}
void Complex::Input()	{
	cout<<"Phan thuc:"; cin>>Real;
	cout<<"Phan ao  :"; cin>>Imaginary;
	}

void Complex::Print()	{
	cout<<'('<<Real<<','<<Imaginary<<')';
	}
int main()	{
	Complex c1(1.02, 5.123), c2;
	c2=Complex(c1);
	cout<<endl<<"So phuc c2:";
	c2.Print();
	cout<<endl<<"Nhap so phuc c1:"; c1.Input();
	Complex c3(c1);
	cout<<endl<<"So phuc c3:";
	c3.Print();
	return 0;
	}



