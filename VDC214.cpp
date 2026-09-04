#include <iostream.h>
//Dinh nghia so phuc
typedef struct
{
	double Real;
	double Imaginary;
}Complex;

Complex SetComplex(double R,double I);
void DisplayComplex(Complex C);
Complex operator + (Complex C1,Complex C2);
Complex operator - (Complex C1,Complex C2);


int main(void)
{
	Complex C1,C2,C3,C4;

	C1 = SetComplex(1.1,2.0);
	C2 = SetComplex(-3.0,4.0);
	cout<<"\nSo phuc thu nhat:";
	DisplayComplex(C1);
	cout<<"\nSo phuc thu hai:";
	DisplayComplex(C2);
	C3 = C1 + C2;
	C4 = C1 - C2;
	cout<<"\nTong hai so phuc nay:";
	DisplayComplex(C3);
	cout<<"\nHieu hai so phuc nay:";
	DisplayComplex(C4);
	return 0;
}

//Dat gia tri cho mo so phuc
Complex SetComplex(double R,double I)
{
	Complex Tmp;

	Tmp.Real = R;
	Tmp.Imaginary = I;
	return Tmp;
}

//Cong hai so phuc
Complex operator + (Complex C1,Complex C2)
{
	Complex Tmp;

	Tmp.Real = C1.Real+C2.Real;
	Tmp.Imaginary = C1.Imaginary+C2.Imaginary;
	return Tmp;
}

//Tru hai so phuc
Complex operator - (Complex C1,Complex C2)
{
	Complex Tmp;

	Tmp.Real = C1.Real-C2.Real;
	Tmp.Imaginary = C1.Imaginary-C2.Imaginary;
	return Tmp;
}

//Hien thi so phuc
void DisplayComplex(Complex C)
{
	cout<<"("<<C.Real<<","<<C.Imaginary<<")";
}
