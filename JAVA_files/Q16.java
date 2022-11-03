import java.util.*;

class calculate
{
    void area(double r)
    {
        double a = 3.14*r*r;
        System.out.println("Area of the circle is: "+a);
    }

    void area(int l,int b)
    {
        int a = l*b;
        System.out.println("Area of the rectangle is: "+a);
    }

    void area(double h,double b)
    {
       double a = 1.0/2.0*h*b;
       System.out.println("The area of triangle is: "+a);
    }
}

class Q16
{
    public static void main(String[] args) {
        calculate c = new calculate();
        System.out.println("Enter the radius of circle:");
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        c.area(r);
        System.out.println("Enter the length and breadth of rectangle:");
        int l = sc.nextInt();
        int b = sc.nextInt();
        c.area(l, b);
        System.out.println("Enter the height and base of triangle :");
        double h = sc.nextDouble();
        double g = sc.nextDouble();
        c.area(h, g); 
    }
}
