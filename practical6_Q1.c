#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundaryfill(int x,int y,int fill,int bound)
{
	int c=getpixel(x,y);
	if((c!=fill) && (c!=bound))
	{
		putpixel(x,y,fill);
		delay(5);
		boundaryfill(x+1,y,fill,bound);
		boundaryfill(x-1,y,fill,bound);
		boundaryfill(x,y+1,fill,bound);
		boundaryfill(x,y-1,fill,bound);
		boundaryfill(x+1,y+1,fill,bound);
		boundaryfill(x+1,y-1,fill,bound);
		boundaryfill(x-1,y+1,fill,bound);
		boundaryfill(x-1,y-1,fill,bound);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	rectangle(50,50,100,100);
	boundaryfill(55,55,4,15);
	getch();
	closegraph();
}
