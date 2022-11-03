import java.util.*;

class Point
{
    int x=1,y=1;
    
    Point()
    {

    }
    Point(int n,int m)
    {
        x=n;
        y=m;
    }

    void display()
    {
        System.out.println("Y="+y);
        System.out.println("X="+x);
    }
}

class Line
{
    Point p1 = new Point();
    Point p2 = new Point();
    double length;
    Line()
    {

    }
    Line(int a,int b,int c,int d)
    {
        p1.x=a;
        p1.y=b;
        p2.x=c;
        p2.y=d;
        length = Math.sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
    }
    void display()
    {
        System.out.println("Length is: "+length);
    }
}

class Triangle 
{
    Line l1 = new Line();
    Line l2 = new Line();
    Line l3 = new Line();
    double perimeter;
    
    Triangle()
    {

    }
    Triangle(double a,double b,double c)
    {
       l1.length=a;
       l2.length=b;
       l3.length=c; 
       perimeter = l1.length + l2.length + l3.length;
    }

    void display()
    {
        System.out.println("Area is: "+perimeter);
    }
}

class Q20 {
    public static void main(String[] args) {
        Point p = new Point(2,4);
        p.display();
        Line l = new Line(6,7,8,9);
        l.display();
        Triangle t = new Triangle(5.0,6.0,7.0);
        t.display();
    }  
}
