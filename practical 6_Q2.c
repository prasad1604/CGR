#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundaryfill(int x,int y,int fill,int bound)
{
	int c=getpixel(x,y);
	if((c!=bound) && (c!=fill))
	{
		putpixel(x,y,fill);
		delay(5);
		boundaryfill(x+1,y,fill,bound);
		boundaryfill(x-1,y,fill,bound);
		boundaryfill(x,y+1,fill,bound);
		boundaryfill(x,y-1,fill,bound);
	}
}
void main()
{
	int gd=DETECT,gm,array[]={320,240,340,220,360,240,360,280,320,280,320,240};
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setcolor(4);
	drawpoly(6,array);
	boundaryfill(321,241,5,4);
	getch();
	closegraph();
}
