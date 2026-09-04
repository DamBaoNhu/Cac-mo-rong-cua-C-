#include <iostream.h>
#include <math.h>

int MyAbs(int X);
long MyAbs(long X);
double MyAbs(double X);

int main()
{
	int X = -7;
	long Y = 200000l;
	double Z = -35.678;
	cout<<"Tri tuyet doi cua so nguyen (int) "<<X<<" la "
		 <<MyAbs(X)<<endl;
	cout<<"Tri tuyet doi cua so nguyen (long int) "<<Y<<" la "
		 <<MyAbs(Y)<<endl;
	cout<<"Tri tuyet doi cua so thuc "<<Z<<" la "
		 <<MyAbs(Z)<<endl;
	return 0;
}

int MyAbs(int X)
{
	return abs(X);
}

long MyAbs(long X)
{
	return labs(X);
}

double MyAbs(double X)
{
	return fabs(X);
}
