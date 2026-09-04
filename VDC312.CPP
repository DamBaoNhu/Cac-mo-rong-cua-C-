#include<iostream.h>
#include<conio.h>
#include<graphics.h>
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
		int	getx()	{
			return	x;
			}
		int gety()	{
			return	y;
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
		void Draw()	{
			setcolor(color);
			line(p1.getx(), p1.gety(), p2.getx(), p2.gety());
			}
	};
void	InitGR()	{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	}
void main()	{
	Line    l1,
			l2(14, 500, 10, 10, 400),
			l3(2, Point(20, 50), Point(400, 400));
	InitGR();
	l1.Draw();
	l2.Draw();
	l3.Draw();
	getch();
	closegraph();
	}
