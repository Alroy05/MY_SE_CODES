-+import java.util.*;

import javax.lang.model.util.ElementScanner14;

class FibPal{
    void Fib(int x){
       int i,a=0,b=1,sum=0;
       for(i=0;i<x;i++){
           System.out.print(sum);
           a = b;
           b = sum;
           sum = a + b;
       }
    }
    void Pal(int x){
        int n, d,s=0;
        n = x;
        do{
            d=n%10;
            s = s*10+d;
            n=n/10;
        }while(n!=0);
        System.out.println(s);
        if(s==x)
        {
            System.out.println("Pallindrome");
        }
        else{
            System.out.println("Not a pallindrome");
        }
        

    }
}

class Expt2{
    public static void main(String[] args){
    System.out.println("Enter a number");

    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();

    System.out.println("Choose an Operation\n1.Fibonacci\n2.Pallindrome");
    int ch = sc.nextInt();

    FibPal f = new FibPal();
    switch(ch){
        case 1:
        {
          f.Fib(x);
          break;
        }
        case 2:
        {
          f.Pal(x);
          break;
        }
    }
    }
}