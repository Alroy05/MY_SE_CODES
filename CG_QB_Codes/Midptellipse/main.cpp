#include<stdio.h>
#include<conio.h>
#include<graphics.h>

long x,y,xc,yc;
long rx_sqr, ry_sqr, fx, fy, d, rx, ry, tmp1, tmp2;

int main()
{
	int gd = DETECT, gm = 0;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	printf("Enter the value of rx and ry: ");
	scanf("%ld%ld", &rx, &ry);
	printf("Enter the center of the ellipse: ");
	scanf("%d%d", &xc, &yc);

	x=0;
	y=ry;

	rx_sqr=rx*rx;
	ry_sqr=ry*ry;
	fx=2*ry_sqr*x;
	fy=2*rx_sqr*y;
	d=ry_sqr-(rx_sqr*ry)+(rx_sqr*0.25);
	do
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);

		if(d<0)
		{
			d=d+fx+ry_sqr;
		}
		else
		{
			y=y-1;
			d=d+fx+-fy+ry_sqr;
			fy=fy-(2*rx_sqr);
		}
		x=x+1;
		fx=fx+(2*ry_sqr);
		delay(10);

	}while(fx<fy);

	tmp1=(x+0.5)*(x+0.5);
	tmp2=(y-1)*(y-1);

	d=ry_sqr*tmp1+rx_sqr*tmp2-(rx_sqr*ry_sqr);
	do
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);

		if(d>=0)
		{
			d=d-fy+rx_sqr;
		}
		else
		{
			x=x+1;
			d=d+fx-fy+rx_sqr;
			fx=fx+(2*ry_sqr);
		}
		y=y-1;
		fy=fy-(2*rx_sqr);
	}while(y>0);

	getch();


}
