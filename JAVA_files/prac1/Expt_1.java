import java.util.*;

class Expt_1{
    public static void main(String[] args)
    {
        String quote[]={"Good Morning","Have a nice day!","Hello","Hi","May god bless you!"};
        Random r = new Random();
        int a = Math.abs(r.nextInt()%5); 
        System.out.println(quote[a]);
        Date d = new Date();
        System.out.println("Today's date is " +d);
    }
}



