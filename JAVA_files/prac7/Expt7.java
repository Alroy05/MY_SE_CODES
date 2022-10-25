import java.util.*;

class Child1 extends Thread
{
   public void run()
   { 
    System.out.println("Thread 1");
   }

}

class Child2 implements Runnable
{
  public void run()
  {
    System.out.println("Thread 2");
  }
}

class Expt7
{
    public static void main(String[] args) {
       Child1 c1 = new Child1();
       Child2 c2 = new Child2();
       Thread t2 = new Thread(c2);

       c1.run();
       c2.run();
       

        
    }
}