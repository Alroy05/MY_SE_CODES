import java.util.*;

class Numbers extends Thread{
    public void run()
    {
        for(int i =1;i<=10;i++)
        {
           System.out.println("This is thread 1 printing digits "+i);
        }
    }
}

class Numbers2 implements Runnable
{
    public void run()
    {
         for(int i =1;i<=10;i++)
        {
           System.out.println("This is thread 2 printing digits "+i);
        }
    }
}

class Q6
{
    public static void main(String[] args)
    {
        Numbers t1 = new Numbers();
        Numbers2 t2 = new Numbers2();
        Thread T1 = new Thread(t2);
        t1.start();
        T1.start();
       
    }
}
