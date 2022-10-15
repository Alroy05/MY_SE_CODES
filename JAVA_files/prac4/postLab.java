import java.util.*;

class Point 
{
    int x,y;
    Point()
    {
        x=y=0;
    }

    Point(int x_co,int y_co)
    {
        x=x_co;
        y=y_co;
    }

    void displayPoints()
    {
        System.out.println("X:"+x+" Y:"+y);
    }
}

class Circle
{   
    int Center_x;
    int Center_y;
    Point p = new Point(6,7);
    Circle()
    {
       Center_x=p.x;
       Center_y=p.y;
    }
    
    void displayCenter()
    {
        System.out.println("Center points are:("+Center_x+","+Center_y+")");
    }
}

class postLab{
    public static void main(String[] args) {
        Point p1 = new Point(3,5);
        p1.displayPoints();

        Circle c1 = new Circle();
        c1.displayCenter();
    }
}