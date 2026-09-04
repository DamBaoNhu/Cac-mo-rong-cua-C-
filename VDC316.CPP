#include <iostream.h>
#include <math.h>
class Complex{
	private:
		double Real, Imaginary;
	public:
		Complex(); // Constructor mac dinh
		Complex(double R,double I);
		Complex (const Complex & Z); // Constructor sao chep
		Complex (double R); // Constructor chuyen doi
		friend istream &operator >>(istream &is, Complex &c);
		friend ostream &operator <<(ostream &os, Complex &c);
		Complex operator + (Complex Z);
		Complex operator - (Complex Z);
		Complex operator += (Complex Z);
		Complex operator -= (Complex Z);
		Complex operator -(){//Toan tu mot ngoi
			Complex Tmp;
			Tmp.Real=-Real;
			Tmp.Imaginary=-Imaginary;
			return	Tmp;
			}
//Cac toan tu so sanh
		int operator == (Complex Z);
		int operator != (Complex Z);
		int operator > (Complex Z);
		int operator >= (Complex Z);
		int operator < (Complex Z);
		int operator <= (Complex Z);
	private:
		double Abs(); // Gia tri tuyet doi cua so phuc
	};
Complex::Complex(){
	Real = 0.0;
	Imaginary = 0.0;
	}
Complex::Complex(double R,double I){
	Real = R;
	Imaginary = I;
	}
Complex::Complex(const Complex & Z)	{
	Real = Z.Real;
	Imaginary = Z.Imaginary;
	}
Complex::Complex(double R){
	Real = R;
	Imaginary = 0.0;
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
Complex Complex::operator + (Complex Z){
	Complex Tmp;
	Tmp.Real = Real + Z.Real;
	Tmp.Imaginary = Imaginary + Z.Imaginary;
	return Tmp;
	}
Complex Complex::operator - (Complex Z){
	Complex Tmp;
	Tmp.Real = Real - Z.Real;
	Tmp.Imaginary = Imaginary - Z.Imaginary;
	return Tmp;
	}
Complex Complex::operator += (Complex Z){
	Real += Z.Real;
	Imaginary += Z.Imaginary;
	return *this;
	}
Complex Complex::operator -= (Complex Z){
	Real -= Z.Real;
	Imaginary -= Z.Imaginary;
	return *this;
	}
int Complex::operator == (Complex Z){
	return (Real == Z.Real) && (Imaginary == Z.Imaginary);
	}
int Complex::operator != (Complex Z){
	return (Real != Z.Real) || (Imaginary != Z.Imaginary);
	}
int Complex::operator > (Complex Z){
	return Abs() > Z.Abs();
	}
int Complex::operator >= (Complex Z){
	return Abs() >= Z.Abs();
	}
int Complex::operator < (Complex Z){
	return Abs() < Z.Abs();
	}
int Complex::operator <= (Complex Z){
	return Abs() <= Z.Abs();
	}
double Complex::Abs() {
	return sqrt(Real*Real+Imaginary*Imaginary);
	}
int main(){
	Complex X, Y(4.3,8.2), Z(3.3,1.1), T;
	cout<<"X: "<<X;
	cout<<endl<<"Y: "<<Y;
	cout<<endl<<"Z: "<<Z;
	cout<<endl<<"T: "<<T;
	T=5.3;// Goi constructor chuyen kieu
	cout<<endl<<endl<<"T = 5.3"<<endl;
	cout<<"T: "<<T;
	X = Y + Z;
	cout<<endl<<endl<<"X = Y + Z: "<<X;
	cout<<" = "<<Y;
	cout<<" + "<<Z;
	X = Y - Z;
	cout<<endl<<"X = Y - Z: "<<X;
	cout<<" = "<<Y;
	cout<<" - "<<Z;
	cout<<endl<<endl<<"Y += T i.e "<<Y;
	cout<<" += "<<T;
	Y += T;
	cout<<endl<<"Y: "<<Y;
	cout<<endl<<"Z -= T i.e "<<Z;
	cout<<" -= "<<T;
	Z -= T;
	cout<<endl<<"Z: "<<Z;
	Complex U(X);// Goi constructor sao chep
	cout<<endl<<endl<<"U: "<<U;
	cout<<endl<<endl<<"Evaluating: X==U"<<endl;
	if (X==U)
		cout<<"They are equal"<<endl;
	cout<<"Evaluating: Y!=Z"<<endl;
	if (Y!=Z)
		cout<<"They are not equal => ";
	if (Y>Z)
		cout<<"Y>Z";
	else
		cout<<"Y<Z";
	cout<<endl<<"Input a complex:";
	cin>>X;
	cout<<-X;
	return 0;
	}
