/*
//Chuong trinh C
#include<stdio.h>
#include<alloc.h>
void main()	{
	int *P;
	P =(int*) malloc(sizeof(int));
	if (P==NULL)
		printf("Khong con du bo nho de cap phat\n");
	else	{
		*P = 290;
		printf("%d\n", *P);
		free(P);
		}
}
*/

///*
//Chuong trinh C++
#include<iostream.h>
void main()	{
	int *P;
	P = new int;
	if (P==NULL)
		cout<<"Khong con du bo nho de cap phat\n";
	else	{
		*P = 290;
		cout<<*P<<"\n";
		delete P;
		}
}
//*/
