#include <iostream.h>

inline float Cube(float S)
{
		return S*S*S;
}

int main()
{
	cout<<"Nhap vao chieu dai canh cua hinh lap phuong:";
	float Side;
	cin>>Side;
	cout<<"The tich cua hinh lap phuong = "<<Cube(Side);
	return 0;
}
