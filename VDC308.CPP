#include <iostream.h>
class Time	{
	public:
		Time(int Hour = 0, int Minute = 0, int Second = 0);
			//Constructor mac dinh
		void SetTime(int Hr, int Min, int Sec);
		void PrintStandard();
	private:
		int Hour;
		int Minute;
		int Second;
	};
//Ham constructor de khoi tao du lieu private
//Cac gia tri mac dinh la 0
Time::Time(int Hr, int Min, int Sec)	{
	SetTime(Hr, Min, Sec);
	}
//Thiet lap cac gia tri cua Hour, Minute va Second
//Gia tri khong hop le duoc thiet lap la 0
void Time::SetTime(int H, int M, int S)	{
	Hour = (H >= 0 && H < 24) ? H : 0;
	Minute = (M >= 0 && M < 60) ? M : 0;
	Second = (S >= 0 && S < 60) ? S : 0;
	}
// Hien thi thoi gian theo dang chuan: HH:MM:SS AM (hoac PM)
void Time::PrintStandard()	{
	cout << ((Hour == 0 || Hour == 12) ? 12 : Hour % 12)
		 << ":" << (Minute < 10 ? "0" : "") << Minute
		 << ":" << (Second < 10 ? "0" : "") << Second
		 << (Hour < 12 ? " AM" : " PM");
	}

int main()	{
	Time T1,T2(2),T3(21,34),T4(12,25,42),T5(27,74,99);
	cout << "Constructed with:" << endl
		 << "all arguments defaulted:" << endl << " ";
	T1.PrintStandard();
	cout << endl << "Hour specified; Minute and Second defaulted:"
	<< endl << " ";
	T2.PrintStandard();
	cout << endl << "Hour and Minute specified; Second defaulted:"
	<< endl << " ";
	T3.PrintStandard();
	cout << endl << "Hour, Minute, and Second specified:"
	<< endl << " ";
	T4.PrintStandard();
	cout << endl << "all invalid values specified:"
	<< endl << " ";
	T5.PrintStandard();
	cout << endl;
	return 0;
	}
