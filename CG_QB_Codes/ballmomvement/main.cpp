#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main() {
 int gd = DETECT, gm;
 int i, x, y, flag=0;
 initgraph(&gd, &gm, "");

 /* get mid positions in x and y-axis */
 x = 150;
 y = getmaxx()/2;


 while (!kbhit()) {
  if(x >= getmaxy()-90 || x <= 90)
     flag = !flag;
     /* draws the gray board */
     setcolor(YELLOW);
     setfillstyle(SOLID_FILL, YELLOW);
     circle(x, y, 30);
     floodfill(x, y, YELLOW);

 /* delay for 50 milli seconds */
 delay(30);

 /* clears screen */
 cleardevice();
 if(flag){
     x = x + 5;
 } else {
     x = x - 5;
 }
    }

    getch();
    closegraph();
    return 0;
}
