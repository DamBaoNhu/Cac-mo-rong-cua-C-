#include <iostream.h>
class	Dagiac	{
	protected:
		int Day, Cao;
	public:
		void GanGiaTri(int a, int b)	{
			Day=a;
			Cao=b;
			}
	};
class	Tamgiac:public Dagiac	{
	public:
		int	Dientich(void)	{
			return Day*Cao/2;
			}
	};
class	Hcn:public Dagiac	{
	public:
		int	Dientich(void)	{
			return Day*Cao;
			}
	};
void	main()	{
	Tamgiac	A;
	Hcn	B;
	A.GanGiaTri(4,5);
	B.GanGiaTri(4,5);
	cout<<A.Dientich()<<endl<<B.Dientich()<<endl;
	}
