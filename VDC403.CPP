#include<iostream.h>
class Dagiac	{
	protected:
		int Day, Cao;
	public:
		void GanGiaTri(int a, int b)	{
			Day=a;
			Cao=b;
			}
	};
class Inmh	{
	public:
		void In(int i)	{
			cout<<i<<endl;
			}
	};
class Hcn:public Dagiac, public Inmh	{
	public:
		int Dientich(void)	{
			cout<<"Dien tich hinh chu nhat la:";
			return (Day*Cao);
		}
	};
class Tamgiac:public Dagiac, public Inmh	{
	public:
		int Dientich(void)	{
			cout<<"Dien tich tam giac la:";
			return (Day*Cao/2);
			}
	};
void	main()	{
	Tamgiac	A;
	Hcn	B;
	A.GanGiaTri(4,5);
	B.GanGiaTri(4,5);
	A.In(A.Dientich());
	B.In(B.Dientich());
	}
