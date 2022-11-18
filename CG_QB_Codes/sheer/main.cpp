#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main()
{
  int x[10],y[10],x1[10],y1[10],i,sheer;
  int gd=DETECT,gm;
  initgraph(&gd,&gm," ");
  printf("Enter the coordinates of the triangle");
  for(i=0;i<3;i++)
  {
    scanf("%d%d",&x[i],&y[i]);
  }
  printf("Sheer vector is:");
  scanf("%d",&sheer);
  setcolor(GREEN);
  for(i=0;i<2;i++)
  {
    line(x[i],y[i],x[i+1],y[i+1]);
  }
  line(x[2],y[2],x[0],y[0]);
  for(i=0;i<3;i++)
  x1[i]=x[i]+(y[i]*sheer);

  setcolor(BLUE);
  for(i=0;i<2;i++)
   line(x1[i],y[i],x1[i+1],y[i]);
   line(x1[2],y[2],x1[0],y[0]);

  for(i=0;i<3;i++)
   y1[i]=y[i]+(x[i]*sheer);

  setcolor(YELLOW);
  for(i=0;i<2;i++)
   line(x[i],y1[i],x[i+1],y[i+1]);
   line(x[2],y1[2],x[0],y[0]);

   getch();
  closegraph();

  return 0;
}
