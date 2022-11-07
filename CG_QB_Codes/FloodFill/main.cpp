#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void floodFill(int x, int y, int o_color, int n_color)
{
	if(getpixel(x, y) != o_color && getpixel(x, y) != n_color)
	{
		putpixel(x, y, n_color);
		floodFill(x + 1, y, o_color, n_color);
		floodFill(x - 1, y, o_color, n_color);
		floodFill(x, y + 1, o_color, n_color);
		floodFill(x, y - 1, o_color, n_color);
		floodFill(x + 1, y + 1, o_color, n_color);
		floodFill(x - 1, y - 1, o_color, n_color);
		floodFill(x + 1, y - 1, o_color, n_color);
		floodFill(x - 1, y + 1, o_color, n_color);

	}
}
int main()
{
	int gd = DETECT, gm = 0;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Flood Fill Algorithm");
	rectangle(50, 50, 100, 100);
	floodFill(55, 55, 15, 3);
getch();
}

