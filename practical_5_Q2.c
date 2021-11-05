#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void fillcolor(int x,int y,int old,int nc)
{
	int c=getpixel(x,y);
	if(c!=old && c!=nc)
	{
		delay(5);
		putpixel(x,y,old);
		fillcolor(x+1,y,old,nc);
		fillcolor(x-1,y,old,nc);
		fillcolor(x,y+1,old,nc);
		fillcolor(x,y-1,old,nc);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setcolor(4);
	line(150,50,100,100);
	line(150,50,200,100);
	line(100,100,200,100);
	fillcolor(151,60,1,4);
	getch();
	closegraph();
}
