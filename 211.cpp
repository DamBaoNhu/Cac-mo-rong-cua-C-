#include <iostream.h>
//prototype
void Swap(int &X,int &Y);

int main()
{
	int X = 10, Y = 5;
	cout<<"Truoc khi hoan doi: X = "<<X<<",Y = "<<Y<<endl;
	Swap(X,Y);
	cout<<"Sau khi hoan doi: X = "<<X<<",Y = "<<Y<<endl;
	return 0;
}

void Swap(int &X,int &Y)
{
	int Temp=X;
	X=Y;
	Y=Temp;
}
