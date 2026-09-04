#include <stdio.h>
/* Dinh nghia so phuc */
typedef struct
{
	double Real;
	double Image;
}Complex;

Complex SetComplex(double R,double I);
Complex AddComplex(Complex C1,Complex C2);
Complex SubComplex(Complex C1,Complex C2);
void DisplayComplex(Complex C);

int main(void)
{
	Complex C1,C2,C3,C4;

	C1 = SetComplex(1.0,2.0);
	C2 = SetComplex(-3.0,4.0);
	printf("\nSo phuc thu nhat:");
	DisplayComplex(C1);
	printf("\nSo phuc thu hai:");
	DisplayComplex(C2);
	C3 = AddComplex(C1,C2);
	C4 = SubComplex(C1,C2);
	printf("\nTong hai so phuc nay:");
	DisplayComplex(C3);
	printf("\nHieu hai so phuc nay:");
	DisplayComplex(C4);
	return 0;
}

/* Dat gia tri cho mo so phuc */
Complex SetComplex(double R,double I)
{
	Complex Tmp;

	Tmp.Real = R;
	Tmp.Image = I;
	return Tmp;
}

/* Cong hai so phuc */
Complex AddComplex(Complex C1,Complex C2)
{
	Complex Tmp;

	Tmp.Real = C1.Real+C2.Real;
	Tmp.Image = C1.Image+C2.Image;
	return Tmp;
}

/* Tru hai so phuc */
Complex SubComplex(Complex C1,Complex C2)
{
	Complex Tmp;

	Tmp.Real = C1.Real-C2.Real;
	Tmp.Image = C1.Image-C2.Image;
	return Tmp;
}

/* Hien thi so phuc */
void DisplayComplex(Complex C)
{
	printf("(%.1lf,%.1lf)",C.Real,C.Image);
}
