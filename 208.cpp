#include <iostream.h>
#include <iomanip.h>
void main()	{
	int	**a, n, i,j;
	cout<<"Cap cua ma tran n=";
	cin>>n;
	a=new  int*[n];
	for (i=0; i<n; i++) a[i]=new int[n];
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)	{
			cout<<"a["<<i<<j<<"]=";
			cin>>a[i][j];
			}
	cout<<"Ma tran vua nhap la:"<<endl;
	for (i=0; i<n; i++)	{
		for (j=0; j<n; j++)	cout<<setw(5)<<a[i][j];
		cout<<endl;
		}
}


/*
#include <iostream.h>
#include <conio.h>
//prototype
void AddMatrix(int * A,int *B,int*C,int M,int N);
int  AllocMatrix(int **A,int M,int N);
void FreeMatrix(int *A);
void InputMatrix(int *A,int M,int N,char Symbol);
void DisplayMatrix(int *A,int M,int N);

int main()
{

	int M,N;
	int *A=NULL,*B=NULL,*C=NULL;

	clrscr();
	cout<<"Nhap so dong cua ma tran:";
	cin>>M;
	cout<<"Nhap so cot cua ma tran:";
	cin>>N;
	//Cap phat vung nho cho ma tran A
	if (!AllocMatrix(&A,M,N))
	{
		cout<<"Khong con du bo nho!"<<endl;
		return 1;
	}
	//Cap phat vung nho cho ma tran B
	if (!AllocMatrix(&B,M,N))
	{
		cout<<"Khong con du bo nho!"<<endl;
		FreeMatrix(A);//Giai phong vung nho A
		return 1;
	}
	//Cap phat vung nho cho ma tran C
	if (!AllocMatrix(&C,M,N))
	{
		cout<<"Khong con du bo nho!"<<endl;
		FreeMatrix(A);//Giai phong vung nho A
		FreeMatrix(B);//Giai phong vung nho B
		return 1;
	}
	cout<<"Nhap ma tran thu 1"<<endl;
	InputMatrix(A,M,N,'A');
	cout<<"Nhap ma tran thu 2"<<endl;
	InputMatrix(B,M,N,'B');
	clrscr();
	cout<<"Ma tran thu 1"<<endl;
	DisplayMatrix(A,M,N);
	cout<<"Ma tran thu 2"<<endl;
	DisplayMatrix(B,M,N);
	AddMatrix(A,B,C,M,N);
	cout<<"Tong hai ma tran"<<endl;
	DisplayMatrix(C,M,N);
	FreeMatrix(A);//Giai phong vung nho A
	FreeMatrix(B);//Giai phong vung nho B
	FreeMatrix(C);//Giai phong vung nho C
	return 0;
}
//Cong hai ma tran
void AddMatrix(int *A,int *B,int*C,int M,int N)
{
	for(int I=0;I<M*N;++I)
		C[I] = A[I] + B[I];
}
//Cap phat vung nho cho ma tran
int AllocMatrix(int **A,int M,int N)
{
	*A = new int [M*N];
	if (*A == NULL)
		return 0;
	return 1;
}
//Giai phong vung nho
void FreeMatrix(int *A)
{
	if (A!=NULL)
		delete [] A;
}
//Nhap cac gia tri cua ma tran
void  InputMatrix(int *A,int M,int N,char Symbol)
{
	for(int I=0;I<M;++I)
		for(int J=0;J<N;++J)
		{
			cout<<Symbol<<"["<<I<<"]["<<J<<"]=";
			cin>>A[I*N+J];
		}
}
//Hien thi ma tran
void DisplayMatrix(int *A,int M,int N)
{
	for(int I=0;I<M;++I)
	{
		for(int J=0;J<N;++J)
		{
			cout.width(7);//Hien thi canh le phai voi chieu dai 7 ky tu
			cout<<A[I*N+J];
		}
		cout<<endl;
	}
}
*/
