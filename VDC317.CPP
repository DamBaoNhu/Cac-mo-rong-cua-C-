#include <iostream.h>
#include <math.h>
class Complex{
	private:
		double Real,Imaginary;
	public:
		Complex(); // Constructor mac dinh
		Complex(double R,double I);
		Complex (const Complex & Z); // Constructor sao chep
		Complex (double R); // Constructor chuyen doi
		friend istream &operator >>(istream &is, Complex &c);
		friend ostream &operator <<(ostream &os, Complex &c);
// Cac toan tu tinh toan
		friend Complex operator + (Complex Z1,Complex Z2);
		friend Complex operator - (Complex Z1,Complex Z2);
		Complex operator += (Complex Z);
		Complex operator -= (Complex Z);
		friend Complex operator-(Complex c)	{ //Toan tu mot ngoi
			Complex Tmp;
			Tmp.Real=-c.Real;
			Tmp.Imaginary=-c.Imaginary;
			return Tmp;
			}
// Cac toan tu so sanh
		friend int operator == (Complex Z1,Complex Z2);
		friend int operator != (Complex Z1,Complex Z2);
		friend int operator > (Complex Z1,Complex Z2);
		friend int operator >= (Complex Z1,Complex Z2);
		friend int operator < (Complex Z1,Complex Z2);
		friend int operator <= (Complex Z1,Complex Z2);
	private:
		double Abs(); // Gia tri tuyet doi cua so phuc
	};
Complex::Complex() {
	Real = 0.0;
	Imaginary = 0.0;
	}
Complex::Complex(double R,double I) {
	Real = R;
	Imaginary = I;
	}
Complex::Complex(const Complex & Z){
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

Complex operator + (Complex Z1,Complex Z2){
	Complex Tmp;
	Tmp.Real = Z1.Real + Z2.Real;
	Tmp.Imaginary = Z1.Imaginary + Z2.Imaginary;
	return Tmp;
	}
Complex operator - (Complex Z1,Complex Z2){
	Complex Tmp;
	Tmp.Real = Z1.Real - Z2.Real;
	Tmp.Imaginary = Z1.Imaginary - Z2.Imaginary;
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
int operator == (Complex Z1,Complex Z2){
	return (Z1.Real == Z2.Real) && (Z1.Imaginary == Z2.Imaginary);
	}
int operator != (Complex Z1,Complex Z2){
	return (Z1.Real != Z2.Real) || (Z1.Imaginary != Z2.Imaginary);
	}
int operator > (Complex Z1,Complex Z2){
	return Z1.Abs() > Z2.Abs();
	}
int operator >= (Complex Z1,Complex Z2){
	return Z1.Abs() >= Z2.Abs();
	}
int operator < (Complex Z1,Complex Z2){
	return Z1.Abs() < Z2.Abs();
	}
int operator <= (Complex Z1,Complex Z2){
	return Z1.Abs() <= Z2.Abs();
	}
double Complex::Abs(){
	return sqrt(Real*Real+Imaginary*Imaginary);
	}
int main(){
	Complex X,Y(4.3,8.2),Z(3.3,1.1);
	cout<<"X: "<<X;
	cout<<endl<<"Y: "<<Y;
	cout<<endl<<"Z: "<<Z;
	X = Y + 3.6;
	cout<<endl<<endl<<"X = Y + 3.6: "<<X;
	cout<<" = "<<Y;
	cout<<" + 3.6 ";
	X = 3.6 + Y;
	cout<<endl<<"X = 3.6 + Y: "<<X;
	cout<<" = 3.6 + "<<Y;
	X = 3.8 - Z;
	cout<<endl<<"X = 3.8 - Z: "<<X;
	cout<<" = 3.8 - "<<Z;
	X = Z - 3.8;
	cout<<endl<<"X = Z - 3.8: "<<X;
	cout<<" = "<<Z;
	cout<<" - 3.8 ";
	cout<<endl<<"Input a complex:";
	cin>>X;
	cout<<-X;

	return 0;
	}
