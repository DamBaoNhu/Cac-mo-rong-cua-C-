#include <iostream.h>
class Complex	{
	private:
		double Real, Imaginary;
	public:
		Complex(double R=0.0,double I=0.0);// Constructor mac dinh
		void Print(); // Hien thi so phuc
		Complex operator+(Complex Z); // Phep cong giua hai so phuc
		Complex operator+(double R); // Phep cong mot so phuc voi mot so thuc
	};
Complex::Complex(double R,double I) {
	Real = R;
	Imaginary = I;
	}
void Complex::Print()	{
	cout<<'('<<Real<<','<<Imaginary<<')';
	}
Complex Complex::operator + (Complex Z)	{
	Complex Tmp;
	Tmp.Real = Real + Z.Real;
	Tmp.Imaginary = Imaginary + Z.Imaginary;
	return Tmp;
	}
Complex Complex::operator + (double R){
	Complex Tmp;
	Tmp.Real = Real + R;
	Tmp.Imaginary = Imaginary;
	return Tmp;
	}
int main()	{
	Complex X,Y(4.3,8.2),Z(3.3,1.1);
	cout<<"X: ";
	X.Print();
	cout<<endl<<"Y: ";
	Y.Print();
	cout<<endl<<"Z: ";
	Z.Print();
	X = Y + Z;
	cout<<endl<<endl<<"X = Y + Z:"<<endl;
	X.Print();
	cout<<" = ";
	Y.Print();
	cout<<" + ";
	Z.Print();
	X = Y + 3.5;
	cout<<endl<<endl<<"X = Y + 3.5:"<<endl;
	X.Print();
	cout<<" = ";
	Y.Print();
	cout<<" + 3.5";
	return 0;
	}
