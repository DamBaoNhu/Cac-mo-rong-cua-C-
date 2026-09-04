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
	Complex X[100];
	int n;
	cout<<endl<<"Cho so luong so phuc can nhap:"; cin>>n;
	for (int i=1; i<=n; i++)	{
		cout<<endl<<"Nhap so phuc thu "<<i<<endl;
		X[i].Input();
		}
	cout<<"Cac so phuc vua nhap:";
	for (i=1; i<=n; i++)   {
		X[i].Print(); cout<<";";
		}
	return 0;
	}

		 

