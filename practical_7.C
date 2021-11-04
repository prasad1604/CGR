#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawshape();
void translation(int,int);
void scaling(float,float);
int xmin=20,xmax=50,ymin=80,ymax=110;
void main()
{
	clrscr();
	int tx,ty;
	float sx,sy;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	drawshape();
	printf("Enter tx : ");
	scanf("%d",&tx);
	printf("Enter ty : ");
	scanf("%d",&ty);
	printf("Enter sx(sx<4) : ");
	scanf("%f",&sx);
	printf("Enter sy(sy<4) : ");
	scanf("%f",&sy);
	translation(tx,ty);
	scaling(sx,sy);
	getch();
	closegraph();
}
void drawshape()
{
	line(xmin,ymin,xmax,ymin);
	line(xmin,ymax,xmax,ymax);
	line(xmin,ymin,xmin,ymax);
	line(xmax,ymin,xmax,ymax);
}
void translation(int tx,int ty)
{
	xmin=tx+xmin;
	xmax=tx+xmax;
	ymin=ty+ymin;
	ymax=ty+ymax;
	setcolor(4);
	drawshape();
}
void scaling(float sx,float sy)
{
	xmin=sx*xmin;
	xmax=sx*xmax;
	ymin=sy*ymin;
	ymax=sy*ymax;
	setcolor(10);
	drawshape();
}
