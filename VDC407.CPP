#include<conio.h>
#include<iostream.h>
class Dagiac	{
	protected:
		int Day, Cao;
	public:
		void GanGiaTri(int a, int b)	{
			Day=a;
			Cao=b;
			}
		virtual int Dientich(void) =0;
		void InKQ(void)	{
			cout<<Dientich()<<endl;
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
	Tamgiac	T;
	Hcn	H;
	Dagiac *D1=&H;
	Dagiac *D2=&T;
	clrscr();
	D1->GanGiaTri(4,5);
	D2->GanGiaTri(4,5);
	D1->InKQ();
	D2->InKQ();
	}