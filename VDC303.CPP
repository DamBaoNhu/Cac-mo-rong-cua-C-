#include <iostream.h>
#include <math.h>
class Complex	{
	private:
		double Real, Imaginary;
	public:
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
int main()	{
	Complex c1, *c2;
	c1.Input();
	c2=&c1;
	cout<<endl<<"So phuc C1:";
	c1.Print();
	cout<<endl<<"So phuc C2:";
	c2->Print();
	int n;
	cout<<endl<<"Cho so luong so phuc can nhap:"; cin>>n;
	c2=new Complex[n];
	for (int i=0; i<n; i++)	{
		cout<<endl<<"Nhap so phuc thu "<<i+1<<endl;
		c2[i].Input();
		}
	cout<<"Cac so phuc vua nhap:";
	for (i=0; i<n; i++)   {
		c2[i].Print(); cout<<";";
		}
	delete c2;
	return 0;
	}



