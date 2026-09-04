#include <iostream.h>
int main()
{
	int X;
	cout<< "Nhap vao so thu nhat:";
	cin>>X;
	int Y;
	cout<< "Nhap vao so thu hai:";
	cin>>Y;
	char Op;
	cout<<"Nhap vao toan tu (+-*/):";
	cin>>Op;
	switch(Op)
	{
		case '+':
			cout<<"Ket qua:"<<X+Y<<"\n";
			break;
		case '-':
			cout<<"Ket qua:"<<X-Y<<"\n";
			break;
		case '*':
			cout<<"Ket qua:"<<long(X)*Y<<"\n";
			break;
		case '/':
			if (Y)
				cout<<"Ket qua:"<<long(X)*Y<<"\n";
			else
				cout<<"Khong the chia duoc!" <<"\n";
				break;
		default :
				cout<<"Khong hieu toan tu nay!"<<"\n";
	}
	return 0;
}
