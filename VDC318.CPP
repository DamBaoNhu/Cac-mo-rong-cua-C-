//Chong toan tu [] truy nhap den mot phan tu cua mang 1 chieu
#include <iostream.h>
class Vector{
	private:
		int Size;
		int *Data;
	public:
		Vector(int S=2,int V=0);
		~Vector();
		void Print() const;
		int & operator [] (int I);
		};
Vector::Vector(int S,int V) {
	Size = S;
	Data=new int[Size];
	for(int I=0;I<Size;++I)
	Data[I]=V;
	}
Vector::~Vector() {
	delete []Data;
	}
void Vector::Print() const	{
	cout<<"Vector:(";
	for(int I=0;I<Size-1;++I)
	cout<<Data[I]<<",";
	cout<<Data[Size-1]<<")"<<endl;
	}
int & Vector::operator [](int I){
	return Data[I];
	}
int main() {
	Vector V(5,1);
	V.Print();
	for(int I=0;I<5;++I)
	V[I]*=(I+1);
	V.Print();
	V[0]=10;
	V.Print();
	return 0;
	}
