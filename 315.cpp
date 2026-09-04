#include <iostream.h>
class Complex	{
	private:
		double Real, Imaginary;
	public:
		Complex(double R=0.0,double I=0.0);// Constructor mac dinh
		friend istream &operator >>(istream &is, Complex &c);
		friend ostream &operator <<(ostream &os, Complex &c);
		Complex operator+(Complex Z); // Phep cong giua hai so phuc
		friend Complex operator+(Complex c, double R); // Phep cong mot so phuc voi mot so thuc
	};
Complex::Complex(double R,double I) {
	Real = R;
	Imaginary = I;
	}
istream &operator >>(istream &is, Complex &c)	{
	cout<<"Real:";
	is>>c.Real;
	cout<<"Imaginary:";
	is >>c.Imaginary;
	return is;
	}
ostream &operator <<(ostream &os, Complex &c)	{
	os<<"("<<c.Real<<","<<c.Imaginary<<")";
	return os;
	}
Complex Complex::operator + (Complex Z)	{
	Complex Tmp;
	Tmp.Real = Real + Z.Real;
	Tmp.Imaginary = Imaginary + Z.Imaginary;
	return Tmp;
	}
Complex operator + (Complex c, double R){
	Complex Tmp;
	Tmp.Real = c.Real + R;
	Tmp.Imaginary = c.Imaginary;
	return Tmp;
	}
int main()	{
	Complex X,Y(4.3,8.2),Z(3.3,1.1);
	cout<<"X: ";cin>>X;
	cout<<endl<<X;
	cout<<endl<<"Y: "; cin>>Y;
	cout<<endl<<Y;
	cout<<endl<<"Z: "; cin>>Z;
	cout<<endl<<Z;
	X = Y + Z;
	cout<<endl<<endl<<"X = Y + Z:"<<endl<<X<<" = "<<Y<<" + "<<Z;
	X =  Y+2.3;
	cout<<endl<<endl<<"X = Y + 2.3:"<<endl<<X<<" = "<<Y;
	cout<<" + 2.3";
	return 0;
	}
