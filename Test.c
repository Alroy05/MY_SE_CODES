#include<stdio.h>
#include<graphics.h>
void drawellipse(int Xc,int Yc, int Xk, int Yk)
{
   putpixel(Xc+Xk,Yc+Yk,15);
   putpixel(Xc-Xk,Yc+Yk,15);
   putpixel(Xc+Xk,Yc-Yk,15);
   putpixel(Xc-Xk,Yc-Yk,15);
}

int main()
{
int gd=DETECT,gm;
int Xc,Yc,rx,ry,xk,yk,Pk,Px,Py;
printf("Enter the coordinates of the centre and radius of a circle:");
scanf("%d %d %d %d", &Xc, &Yc, &rx, &ry);
initgraph(&gd,&gm," ");
xk=0 ;
yk=ry;
Px=2*(ry*ry)*xk;
Py=2*(rx*rx)*yk;
drawellipse(Xc,Yc,xk,yk);
Pk=ry*ry-(rx*rx*ry)+(0.25*rx*rx);
do
{
drawellipse(Xc,Yc,xk,yk);
if(Pk<0)
{
Pk=Pk+ry*ry+Px;
}
else
{
yk=yk-1;
Py=Py-2*rx*rx;
Pk=Pk+ry*ry+Px;
}
xk=xk+1;
Px=Px-2*ry*ry;
}
while(Px<Py);

Pk=ry*ry*(xk+0.5)*(xk+0.5)+rx*rx*(yk-1)*(yk-1)-(rx*rx*ry*ry);
do
{
drawellipse(Xc,Yc,xk,yk);
if(Pk>0)
{
Pk=Pk-Py+rx*rx;
}
else
{
xk=xk+1;
Px=Px+2*ry*ry;
Pk=Pk+rx*rx-Py+Px;
}
yk=yk-1;
Py=Py-2*rx*rx;
}
while(yk>0);
getch();
return 0;
}
