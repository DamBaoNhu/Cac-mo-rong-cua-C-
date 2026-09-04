#include <iostream.h>
#include <string.h>
#include <assert.h>
class Employee	{
	public:
		Employee(const char*, const char*); // Constructor
		~Employee(); // Destructor
		char *GetFirstName() ; // Tra ve first name
		char *GetLastName() ;  // Tra ve last name
		// Ham thanh vien tinh
		static int GetCount(); // Tra ve so doi tuong khoi tao
	private:
		char *FirstName;
		char *LastName;
		// static data member
		static int Count; // So doi tuong khoi tao
	};
// Khoi tao thanh vien du lieu tinh
int Employee::Count = 0;
// Dinh nghia ham thanh vien tinh ma tra ve so doi tuong khoi tao
int Employee::GetCount() {
	return Count;
	}
// Constructor cap phat dong cho first name va last name
Employee::Employee(const char *First, const char *Last)	{
	FirstName = new char[ strlen(First) + 1 ];
	assert(FirstName != 0); // Bao dam vung nho duoc cap phat
	strcpy(FirstName, First);
	LastName = new char[ strlen(Last) + 1 ];
	assert(LastName != 0); // Bao dam vung nho duoc cap phat
	strcpy(LastName, Last);
	++Count; // Tang so doi tuong len 1
	cout << "Employee constructor for " << FirstName
		 << ' ' << LastName << " called." << endl;
	}
// Destructor giai phong vung nho duoc cap phat
Employee::~Employee() {
	cout << "~Employee() called for " << FirstName
		 << ' ' << LastName << endl;
	delete FirstName;
	delete LastName;
	--Count; // Giam so doi tuong xuong 1
	}
// Tra ve first name
	char *Employee::GetFirstName() {
	char *TempPtr = new char[strlen(FirstName) + 1];
	assert(TempPtr != 0); // Bao dam vung nho duoc cap phat
	strcpy(TempPtr, FirstName);
	return TempPtr;
	}
// Tra ve last name
char *Employee::GetLastName() {
	char *TempPtr = new char[strlen(LastName) + 1];
	assert(TempPtr != 0); // Bao dam vung nho duoc cap phat
	strcpy(TempPtr, LastName);
	return TempPtr;
	}
int main()	{
	cout << "Number of employees before instantiation is "
		 << Employee::GetCount() << endl; // Su dung ten lop
	Employee *E1Ptr = new Employee("Susan", "Baker");
	Employee *E2Ptr = new Employee("Robert", "Jones");
	cout << "Number of employees after instantiation is "
		 << E1Ptr->GetCount() << endl;
	cout << endl << "Employee 1: "
		 << E1Ptr->GetFirstName()
		 << " " << E1Ptr->GetLastName()
		 << endl << "Employee 2: "
		 << E2Ptr->GetFirstName()
		 << " " << E2Ptr->GetLastName() << endl << endl;
	delete E1Ptr;
	delete E2Ptr;
	cout << "Number of employees after deletion is "
		 << Employee::GetCount() << endl;
	return 0;
	}
