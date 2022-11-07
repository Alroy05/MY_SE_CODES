#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
int main(){
int gr=DETECT,gm;
int i,x,y,j;
initgraph(&gr,&gm,"");

// man
for(j=1;j<600;j=j+5)
{
line(0,400,800,400);
circle(30+j,280,20); //head
line(30+j,300,30+j,350); //body
line(30+j,330,70+j,330); //hand
if(j%2==0){
line(30+j,350,25+j,400); //left leg
line(30+j,350,10+j,400); // right
}
else{
line(30+j,350,35+j,400); //transition
delay(20);
}
delay(170);
cleardevice();
}
getch();
closegraph();
}
