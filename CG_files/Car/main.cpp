#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");


    line(300,200,500,200);
    line(300,200,300,250);
    line(500,200,500,250);
    line(400,200,400,250);

    setfillstyle(SOLID_FILL,RED);
    line(250,250,550,250);
    line(250,300,550,300);
    line(250,250,250,300);
    line(550,250,550,300);
    floodfill(251,251,15);

    setcolor(BLUE);
    setfillstyle(SOLID_FILL,DARKGRAY);
    circle(300,300,25);
    circle(500,300,25);
    floodfill(300,300,BLUE);
    floodfill(500,300,BLUE);

    getch();
    closegraph();
    return 0;
}
