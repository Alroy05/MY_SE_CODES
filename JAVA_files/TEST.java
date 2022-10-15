import java.util.*;
class point{
int x,y;
point(){}
point(int x,int y){
this.x=x;
this.y=y;
}
void display(){
System.out.println("x="+x+"y="+y);
}
}
class line{
point p1=new point();
point p2=new point();
line(){}
line(int x1,int y1,int x2,int y2){
p1.x=x1;
p1.y=y1;
p2.x=x2;
p2.y=y2;
}
double length(){
return(Math.sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y)));
}
void display(){
System.out.println("length="+length());
}
}
class triangle{
Scanner sc=new Scanner(System.in);
line l1=new line();
line l2=new line();
line l3=new line();
triangle(){
System.out.println("enter the coordinates for first line");
l1.p1.x=sc.nextInt();
l1.p1.y=sc.nextInt();
l1.p2.x=sc.nextInt();
l1.p2.y=sc.nextInt();
System.out.println("enter the coordinates for second line");
l2.p1.x=sc.nextInt();
l2.p1.y=sc.nextInt();
l2.p2.x=sc.nextInt();
l2.p2.y=sc.nextInt();
System.out.println("enter the coordinates for third line");
l3.p1.x=sc.nextInt();
l3.p1.y=sc.nextInt();
l3.p2.x=sc.nextInt();
l3.p2.y=sc.nextInt();
}
void perimeter(){
System.out.println("Perimeter is+"+(l1.length()+l2.length()+l3.length()));
}
}
class Main
{
public static void main(String[] args){
triangle t=new triangle();
t.perimeter();
}
}