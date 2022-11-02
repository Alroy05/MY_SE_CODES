import java.util.*;

interface drawable
{
    void draw();
}

class Rectangle implements drawable
{
    public void draw()
    {
        System.out.println("Draw funtion is drawing a rectangle");
    }
}

class Circle implements drawable
{
    public void draw()
    {
        System.out.println("Draw funtion is drawing a Circle");
    }
}

class Triangle implements drawable
{
    public void draw()
    {
        System.out.println("Draw funtion is drawing a Triangle");
    }
}

class Q2 {
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        Circle c = new Circle();
        Triangle t = new Triangle();

        r.draw();
        c.draw();;
        t.draw();
    }
    
}
