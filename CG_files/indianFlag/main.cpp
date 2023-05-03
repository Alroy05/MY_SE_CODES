#include<graphics.h>
#include<conio.h>

int main()
{
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL,12);
    line(150,150,450,150);
    line(150,200,450,200);
    line(150,150,150,200);
    line(450,150,450,200);
    floodfill(151,151,15);


    setfillstyle(SOLID_FILL,WHITE);
    line(150,200,450,200);
    line(150,250,450,250);
    line(150,200,150,250);
    line(450,200,450,250);
    floodfill(151,201,15);

    setfillstyle(SOLID_FILL,GREEN);
    line(150,250,450,250);
    line(150,300,450,300);
    line(150,250,150,300);
    line(450,250,450,300);
    floodfill(151,251,15);

    setcolor(BLUE);
    setfillstyle(HATCH_FILL,1);
    circle(300,225,20);
    floodfill(300,225,1);


    getch();
    closegraph();
    return 0;
}
