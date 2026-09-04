#include <iostream.h>
class Simple	{
	private:
		int *X;
	public:
		Simple(); //Constructor
		~Simple(); //Destructor
		void SetValue(int V);
		int GetValue();
		};
Simple::Simple()	{
	X = new int; //Cap phat vung nho cho X
	}
Simple::~Simple()	{
	delete X; //Giai phong vung nho khi doi tuong bi huy bo.
	}
void Simple::SetValue(int V)	{
	*X = V;
	}
int Simple::GetValue()	{
	return *X;
	}
int main()	{
	Simple S;
	int X;
	cout<<"Enter a number:";
	cin>>X;
	S.SetValue(X);
	cout<<"The value of this number:"<<S.GetValue();
	return 0;
	}
