class Holder 
{
    int n;///shared variable
    Holder()
    { 
        n=1;
    }
    Holder(int m)
    {
        n=m;
    }
    synchronized void manipulate(int p){
    //void manipulate(int p){//shared method
        int z=n+p;
        System.out.println("Thread is " + Thread.currentThread().getName()+ " Read value " + n);
        n=z;
        System.out.println("Thread is " + Thread.currentThread().getName()+ " Updated value " + n);
    }
    void display()
    {
        System.out.println("Final value"+ n);
    }
}
class Thread1 extends Thread{
    Holder x;
    Thread1()
    {}
    
    Thread1(Holder x)
    { 
        this.x=x; 
    }
    public void run(){
        for(int k=1;k<=((int)Math.random()*10000);k++);//for delay 
        x.manipulate(-500);
    }
}
class Thread2 extends Thread{
    Holder y;
    Thread2(){     }
    
    Thread2(Holder y){ this.y=y; }
    public void run(){
       for(int k=1;k<=((int)Math.random()*50);k++);//for delay
        y.manipulate(300);
    }
}
public class Q22
{
        public static void main(String[] args) {
                System.out.println("Hello World");
                Holder t=new Holder(1000);
                
                Thread1 t1=new Thread1(t);
                t1.setName("Withdraw");
                Thread2 t2=new Thread2(t);
                t2.setName("Deposit");
                
                t1.start();
                t2.start();
                
                try {
                    t1.join();
                    t2.join();
                } catch(Exception e) {  } 
                
                t.display();
                
        }
}

