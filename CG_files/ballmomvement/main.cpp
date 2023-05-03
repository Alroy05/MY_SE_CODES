#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
    int gd=DETECT,gm;
    int i=0,j=0;
    initgraph(&gd,&gm," ");
    while(!kbhit())
    {

    for(i=0;i<=580;i=i+5)
    {
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, GREEN);
        circle(50+i,400,50);
        floodfill(50+i,400,BLUE);
        delay(50);
        cleardevice();
    }
    for(j=0;j<=580;j=j+5)
    {
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, GREEN);
        circle(580-j,400,50);
        floodfill(580-j,400,BLUE);
        delay(50);
        cleardevice();
    }
    }
    getch();
    closegraph();
}
