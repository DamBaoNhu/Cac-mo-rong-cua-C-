#include<iostream.h>
class Dagiac	{
	protected:
		int Day, Cao;
	public:
		void GanGiaTri(int a, int b)	{
			Day=a;
			Cao=b;
			}
		virtual int Dientich(void)=0;
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
	Tamgiac	T;
	Hcn	H;
	Dagiac *D1=&H;
	Dagiac *D2=&T;
	D1->GanGiaTri(4,5);
	D2->GanGiaTri(4,5);
	cout<<D1->Dientich()<<endl;
	cout<<D2->Dientich()<<endl;
	}