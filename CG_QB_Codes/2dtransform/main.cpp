#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{

    int gd=DETECT,gm;
    int x1, x2, y1, y2,x3,y3,dx,dy;
    double s,c,A;
    initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");

	printf("Point A: ");
	scanf("%d%d",&x1,&y1);
	printf("Point B: ");
	scanf("%d%d",&x2,&y2);
	printf("Point C: ");
	scanf("%d%d",&x3,&y3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	printf("Angle: ");
	scanf("%lf",&A);
	c = cos(A*3.14/180);
    	s = sin(A*3.14/180);
    	x1 = floor(x1 * c + y1 * s);
    	y1 = floor(-x1 * s + y1 * c);
    	x2 = floor(x2 * c + y2 * s);
    	y2 = floor(-x2 * s + y2 * c);
    	x3 = floor(x3 * c + y3 * s);
    	y3 = floor(-x3 * s + y3 * c);
    	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	printf("tx: ");
	scanf("%d",&dx);
	printf("ty: ");
	scanf("%d",&dy);
	line(x1+dx,y1+dy,x2+dx,y2+dy);
	line(x2+dx,y2+dy,x3+dx,y3+dy);
	line(x3+dx,y3+dy,x1+dx,y1+dy);


	printf("sx: ");
	scanf("%d",&dx);
	printf("sy: ");
	scanf("%d",&dy);
	line(x1*dx,y1*dy,x2*dx,y2*dy);
	line(x2*dx,y2*dy,x3*dx,y3*dy);
	line(x3*dx,y3*dy,x1*dx,y1*dy);


	getch();
   	closegraph();
}

