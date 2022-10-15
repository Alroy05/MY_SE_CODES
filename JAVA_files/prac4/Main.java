
import java.util.*;
class Point{
     int x,y;
    Point(){
     x=0;y=0;
     }
      Point(int a,int b)
     {
        x=a;y=b;
      }
      void  display()
     {
       System.out.println("X:" +x + "Y:" +y);
      }
}
class Line{
    Point p1=new Point();
    Point p2=new Point();
  Line(){
  p1.x=0;  p1.y=0;   p2.x=0; p2.y=0;
}
   Line(int a,int b,int c,int d){
 p1.x=a;  p1.y=b; p2.x=c;   p2.y=d;
}
   double length(){
   double val;
   val=Math.sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
   return val;

}
}
class Triangle
{
  Line l1=new Line();
  Line l2=new Line();
  Line l3=new Line();
  double perimeter(){
return(l1.length()+l2.length()+l3.length());
 }
}
class Main{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter two points\n");
int a=sc.nextInt();
int b=sc.nextInt();
Point p=new Point(a,b);
p.display();
Line l=new Line();
System.out.println(l.length());
Triangle t=new Triangle();
System.out.println(t.perimeter());
}
}
