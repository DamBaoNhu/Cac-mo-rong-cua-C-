#include <iostream.h>
int main()
{
	int X = 200;
	long Y = (long) X; //Chuyen doi kieu theo cach cua C
	long Z = long(X);  //Chuyen doi kieu theo cach moi cua C++
	cout<< "X = "<<X<<"\n";
	cout<< "Y = "<<Y<<"\n";
	cout<< "Z = "<<Z<<"\n";
	return 0;
}
