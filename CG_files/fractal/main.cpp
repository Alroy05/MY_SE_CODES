#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include<math.h>

void tree(float x,float y,float len,float a,float b)
{
    float x1,y1;
    if(len<20)
    {

        setcolor(WHITE);
        circle(x,y,5);
        return;
    }
    setcolor(GREEN);
    x1=x+len*cos(3.1428*a/180);
    y1=y-len*sin(3.1428*a/180);
    line(x,y,x1,y1);
    tree(x1,y1,len*0.75,a-b,b);
    tree(x1,y1,len*0.75,a-b,-b);
}
int main() {
    int gd = DETECT, gm;
    int i;
    float x=320,y=550,t=140;
    initgraph(&gd, &gm, " ");

    for(i=0;i<=3;i++)
    {

        tree(x+i,y,t,90,30);
        tree(x+i,y,t,90,-30);
    }

    getch();
    closegraph();
    return 0;
}
