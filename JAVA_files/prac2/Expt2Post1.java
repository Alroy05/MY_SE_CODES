class AREA 
{
    double area(double r)
    {
        return 3.145*r*r;
    }
    int area(int l,int b)
    {
        return l*b;
    }
    double area(double l,double b)
    {
        return 0.5*l*b;
    }
}

class Expt2Post1
{
    public static void main(String[] args)
    {
       AREA a1 = new AREA();
       
       System.out.println("Area of the circle is "+a1.area(5.0));
       System.out.println("Area of the rectangle is "+a1.area(7,6));
       System.out.println("Area of the square is "+a1.area(5.0,8.0));
    }
}