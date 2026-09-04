#include<iostream.h>
#include<conio.h>
class Point	{
	private:
		int	x, y;
	public:
		Point()	{
			x=y=0;
			}
		Point(int x1, int y1)	{
			x=x1;
			y=y1;
			}
		void Print()	{
			cout<<"("<<x<<","<<y<<")";
			}
	};
class Line	{
	private:
		Point	p1, p2;                        

		int color;
	public:
		Line():p1(), p2()	{
			color=0;
			}
		Line(int color1,int x1,int y1,int x2,int y2):p1(x1,y1),p2(x2,y2) {
			color= color1;
			}
		Line(int color1, Point t1, Point t2)	{
			color=color1;
			p1=t1;
			p2=t2;
			}
		void Print()	{
			cout<<"\nHead:";
			p1.Print();
			cout<<"\nTail:";
			p2.Print();
			cout<<"\nColor:"<<color;
			}
	};
void main()	{
	Line	l1, l2(1, 100, 100, 200, 200),
			l3(2, Point(340, 350), Point(500, 500));
	l1.Print();
	l2.Print();
	l3.Print();
	getch();
	}
