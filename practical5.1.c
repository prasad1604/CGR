#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void fillcolor(int x,int y,int old,int nc)
{
	if((getpixel(x,y)!=old) && (getpixel(x,y)!=nc))
	{
		delay(5);
		putpixel(x,y,old);
		fillcolor(x+1,y,old,nc);
		fillcolor(x-1,y,old,nc);
		fillcolor(x,y+1,old,nc);
		fillcolor(x,y-1,old,nc);
		fillcolor(x+1,y+1,old,nc);
		fillcolor(x+1,y-1,old,nc);
		fillcolor(x-1,y+1,old,nc);
		fillcolor(x-1,y-1,old,nc);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	rectangle(50,50,100,100);
	fillcolor(55,55,4,15);
	getch();
	closegraph();
}
