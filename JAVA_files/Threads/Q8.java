import java.util.*;

class Q8 
{
    int counter=20;
    int start=1;
    public static void main(String[] args) 
    {
        EvenOdd eo = new EvenOdd();
        Thread e = new Thread(new Runnable()
        {
          public void run()
          {
            eo.even();
          }
        });

        Thread o = new Thread(new Runnable() 
        {
            public void run()
            {
                eo.odd();
            }
        });
        System.out.println("The Id of thread 1 is "+o.getId());
        System.out.println("The Id of thread 2 is "+e.getId()); 

        e.start();
        o.start();

        
    } 
}

class EvenOdd{
    int counter=20;
    int start=1;
    
    public void even()
    {
        while(counter!=1)
        {
            synchronized(this)
            {
                while(start%2!=0)
                {
                    try{
                        wait();
                    }
                    catch(InterruptedException e)
                    {
                        
                    }
                }
                System.out.println("Even thread : "+start);
                start++;
                counter--;
                notify();
            }
        }

    }

    public void odd()
    {
        while(counter!=1)
        {
            synchronized(this)
            {
                while(start%2==0)
                {
                    try{
                        wait();
                    }
                    catch(InterruptedException e)
                    {
                        
                    }
                }
                System.out.println("Odd thread : "+start);
                start++;
                counter--;
                notify();
            }
        }

}
}
