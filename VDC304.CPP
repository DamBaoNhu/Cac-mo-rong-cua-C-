#include <iostream.h>
#include <math.h>
class Complex	{
	private:
		double Real, Imaginary;
	public:
		Complex()	{
			Real=0.0;
			Imaginary=0.0;
			}
		Complex(double r, double i)	{
			Real=r;
			Imaginary=i;
			}
		void Input();//Nhap so phuc
		void Print(); // Hien thi so phuc
		Complex Add(Complex c2);
	};

void Complex::Input()	{
	cout<<"Phan thuc:"; cin>>this->Real;
	cout<<"Phan ao  :"; cin>>this->Imaginary;
	}

void Complex::Print()	{
	cout<<'('<<this->Real<<','<<this->Imaginary<<')';
	}

Complex  Complex::Add(Complex c2)	{
	Complex c;
	c.Real=Real+c2.Real;
	c.Imaginary=Imaginary+c2.Imaginary;
	return c;
	}
int main()	{
	Complex c1(1.23, 4.5), c2(10.1,20.3), c3;
	cout<<endl<<"So phuc C1:";
	c1.Print();
	cout<<endl<<"So phuc C2:";
	c2.Print();
	c3=c1.Add(c2);
	cout<<endl<<"So phuc C3:";
	c3.Print();
	return 0;
	}



