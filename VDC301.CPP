#include <iostream.h>
#include <math.h>
class Complex	{
	private:
		double Real, Imaginary;
	public:
		Complex(); // Constructor mac dinh
		Complex(double R,double I);
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

void Complex::Input()	{
	cout<<"Phan thuc:"; cin>>Real;
	cout<<"Phan ao  :"; cin>>Imaginary;
	}

void Complex::Print()	{
	cout<<'('<<Real<<','<<Imaginary<<')';
	}
int main()	{
	Complex X, Y(4.3,8.2);
	cout<<"X: ";
	X.Print();
	cout<<endl<<"Y: ";
	Y.Print();
	cout<<endl<<"Nhap so phuc moi:"<<endl;
	X.Input();
	cout<<endl<<"So phuc vua nhap la:";
	X.Print();
	return 0;
	}

		 

