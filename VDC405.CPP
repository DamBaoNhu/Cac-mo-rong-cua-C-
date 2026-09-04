#include<iostream.h>
class Dagiac	{
	protected:
		int Day, Cao;
	public:
		void GanGiaTri(int a, int b)	{
			Day=a;
			Cao=b;
			}
		virtual int Dientich(void)	{
			cout<<"Dien tich duoc tinh trong ham ao:";
			return 0;
			}
	};
class Hcn:public Dagiac{
	public:
		int Dientich(void)	{
			cout<<"Dien tich hinh chu nhat la:";
			return (Day*Cao);
		}
	};
class Tamgiac:public Dagiac	{
	public:
		int Dientich(void)	{
			cout<<"Dien tich tam giac la:";
			return (Day*Cao/2);
			}
	};
void	main()	{
	Dagiac P;
	Tamgiac	T;
	Hcn	H;
	Dagiac *D1=&H;
	Dagiac *D2=&T;
	Dagiac *D3=&P;
	D1->GanGiaTri(4,5);
	D2->GanGiaTri(4,5);
	D3->GanGiaTri(4,5);
	cout<<D1->Dientich()<<endl;
	cout<<D2->Dientich()<<endl;
	cout<<D3->Dientich()<<endl;
	}