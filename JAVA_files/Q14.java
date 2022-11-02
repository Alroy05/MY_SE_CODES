import java.util.*;

class 14{
 
     public static void main(String[] args){
        
       System.out.println("Enter a term number");
       Scanner sc = new Scanner(System.in);
       int Num = sc.nextInt();
       Fib f = new Fib();
       int z = f.fibo(Num);
       System.out.println("The term is " +z);
    }

    public static class Fib{
        static int fibo(int num){   
            int a =0;    //fibonacci series starting from 0
            int b =1;
            int sum=0;

            for(int i=0;i<(num-2);i++){
                 sum = a + b;
                 a = b;
                 b = sum;
            }
            return b;
        }
    }
}
