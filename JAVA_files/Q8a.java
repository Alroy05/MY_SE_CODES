class A extends Thread
{
    public void run()
    {
        int i;
        for(i=1;i<=20;i++)
        {
            if(i%2==0)
            System.out.println("Thread even printing: "+i);
            try
            {
                Thread.sleep(500);
            }
            catch(InterruptedException e)
            {}
        }
    }
}

class B extends Thread
{
    public void run()
    {
        int i;
        for(i=1;i<=20;i++)
        {
            if(i%2!=0)
            System.out.println("Thread odd printing "+i);
            try
            {
                Thread.sleep(500);
            }
            catch(InterruptedException e)
            {}
        }
    }
}

class Q8a
{
    public static void main(String[] args)
    {
        A t1=new A();
        B t2=new B();
        System.out.println("The id of thread even is "+t1.getId());
        System.out.println("The id of thread odd is "+t2.getId());
        t1.start();
        t2.start();
    }
}
