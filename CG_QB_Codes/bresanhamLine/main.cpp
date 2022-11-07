#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>



int main()
{
     int x1, y1, x2, y2, dx, dy, p, x, y;
     float m;
	 int gd = DETECT, gm = 0;

	 detectgraph(&gd, &gm);
	 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	 printf("Enter the coordinates of the first point: ");
	 scanf("%d%d", &x1, &y1);
	 printf("Enter the coordinates of the second point: ");
	 scanf("%d%d", &x2, &y2);

	 dx = abs(x2 - x1);
	 dy = abs(y2 - y1);

	 m = dy / dx;

	 if(m < 1)
	 {
		  x = x1;
		  y = y1;
		  p =(2*dy) - dx;


		  putpixel(x, y, WHITE);

		  do
		  {
			   if(p >= 0)
			   {
					x = x + 1;
					y = y + 1;
					p = p + (2*dy) - (2*dx);
			   }
			   else
			   {
					x = x + 1;
					y = y;
					p = p + (2*dy);
			   }
		   putpixel(x, y, WHITE);

		  }while(x<=x2);
	 }

	 if(m >= 1)
	 {
		  x = x1;
		  y = y1;
		  p =(2*dx) - dy;


		  putpixel(x, y, WHITE);

		  do
		  {
			   if(p >= 0)
			   {
					x = x + 1;
					y = y + 1;
					p = p + (2*dx) - (2*dy);
			   }
			   else
			   {
					x = x;
					y = y+1;
					p = p + (2*dx);
			   }
		   putpixel(x, y, WHITE);

		  }while(x<=x2);
	 }

	 getch();
}

