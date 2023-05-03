#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int gd = DETECT, gm = 0;
	int x1, y1, x2, y2, dx, dy, step, i, x, y;

	detectgraph (&gd, &gm);
	initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");

	printf("Enter the coordinates of the first point: ");
	scanf("%d%d", &x1, &y1);
	printf("Enter the coordinates of the second point: ");
	scanf("%d%d", &x2, &y2);

	dx = x2 - x1;
	dy = y2 - y1;

	if(dx >= dy)
	{
		step = dx;
	}
	else
	{
		step = dy;
	}

	dx = (x2 - x1) / step;
	dy = (y2 - y1) / step;

	x = x1 + 0.5;
	y = y1 + 0.5;
	putpixel(x,y,WHITE);
	i=1;

	while(i <= step)
	{
		x = x + dx;
		y = y + dy;
		putpixel(x, y, WHITE);
		i++;
	}

	getch();


}

