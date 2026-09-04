#include <iostream.h>
int BoxVolume(int Length = 1, int Width = 1,int Height = 1);

int main()
{
	cout << "The tich hinh hop mac dinh: "
		<< BoxVolume() << endl << endl
		<< "The tich hinh hop voi chieu dai=10,do rong=1,chieu cao=1:"
		<< BoxVolume(10) << endl << endl
		<< "The tich hinh hop voi chieu dai=10,do rong=5,chieu cao=1:"
		<< BoxVolume(10, 5) << endl << endl
		<< "The tich hinh hop voi chieu dai=10,do rong=5,chieu cao=2:"
		<< BoxVolume(10, 5, 2)		  << endl;
	return 0;
}
//Tinh the tich cua hinh hop
int BoxVolume(int Length, int Width, int Height)
{
	return Length * Width * Height;
}
