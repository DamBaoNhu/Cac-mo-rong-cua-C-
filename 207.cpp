#include<iostream.h>
#include<iomanip.h>
void	main()	{
	int *P;
	P = new int[10]; //Cap phat mang 10 so nguyen
	if (P!=NULL)	{
		for(int I = 0;I<10;++I)
			P[I]= I;
		for(I = 0;I<10;++I)
			cout<<P[I]<<"\n";
		delete []P;
		}
	else
		cout<<"Khong con du bo nho de cap phat\n";
}
