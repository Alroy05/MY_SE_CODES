#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void boundaryFill(int x, int y, int f_color, int b_color)
{
	if(getpixel(x, y) != b_color && getpixel(x, y) != f_color)
	{
		putpixel(x, y, f_color);
		boundaryFill(x + 1, y, f_color, b_color);
		boundaryFill(x, y + 1, f_color, b_color);
		boundaryFill(x - 1, y, f_color, b_color);
		boundaryFill(x, y - 1, f_color, b_color);
	}
}

int main()
{
	int gd = DETECT, gm = 0;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Boundary Fill Algorithm");
	rectangle(50, 50, 100, 100);
	boundaryFill(55, 55, 4, 15);

	getch();

}

