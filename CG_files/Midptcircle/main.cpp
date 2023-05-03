#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int r, xc, yc, x, y;
int p;

int main()
{
	int gd = DETECT, gm = 0;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	printf("Enter the radius of the circle: ");
	scanf("%d", &r);
	printf("Enter the center of the circle: ");
	scanf("%d%d", &xc, &yc);

	x = 0;
	y = r;

	p =1 - r;


		 do
		 {
			putpixel(x+xc, y+yc, WHITE);
			putpixel(-x+xc, y+yc, WHITE);
			putpixel(-y+yc, x+xc, WHITE);
			putpixel(-y+yc, -x+xc, WHITE);
			putpixel(-x+xc, -y+yc, WHITE);
			putpixel(x+xc, -y+yc, WHITE);
			putpixel(y+yc, -x+xc, WHITE);
			putpixel(y+yc, x+xc, WHITE);
			delay(50);

			if(p < 0)
			{
				x = x + 1;
				y = y;
				p = p + (2*x) + 3;
			}
			else
			{
				x = x + 1;
				y = y - 1;
				p = p + (2*x) - (2*y) + 5;
			}
		 }while(x < y);

	getch();


}
