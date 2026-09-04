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
		double getRe()	{
			return Real;
			}
		double getIm()	{
			return Imaginary;
			}
		void Input();//Nhap so phuc
		void Print(); // Hien thi so phuc
	};

void Complex::Input()	{
	cout<<"Phan thuc:"; cin>>Real;
	cout<<"Phan ao  :"; cin>>Imaginary;
	}

void Complex::Print()	{
	cout<<'('<<Real<<','<<Imaginary<<')';
	}

void ArrComplexIn(Complex c[], int n)	{
	for (int i=0; i<n; i++)	{
		cout<<endl<<"Nhap so phuc thu "<<i+1<<endl;
		c[i].Input();
		}
	}
void ArrComplexOut(Complex c[], int n)	{
	cout<<"Cac so phuc vua nhap:";
	for (int i=0; i<n; i++)   {
		//c[i].Print(); cout<<";";
		cout<<"("<<c[i].getRe()<<","<<c[i].getIm()<<");";
		}
	}
int main()	{
	Complex c[100];
	ArrComplexIn(c, 3);
	ArrComplexOut(c, 3);
	return 0;
	}



