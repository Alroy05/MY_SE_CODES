import java.util.*;

class Operation{
    void pallindrome(int num)
    {
        int n, d,s=0;
        n = num;
        do{
            d=n%10;
            s = s*10+d;
            n=n/10;
        }while(n!=0);
        System.out.println(s);
        if(s==num)
        {
            System.out.println("Pallindrome");
        }
        else{
            System.out.println("Not a pallindrome");
        }
    }

    void fibonacci(int num)
    {
        int a = 0;
        int b =1;
        int sum;
        for(int i=1;i<=num;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        System.out.println("b");
    }
}
class Q17
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        System.out.println("Enter 1.Pallindrome\n2.Fibonacci");
        int option = sc.nextInt();
        Operation o = new Operation();
        switch(option)
        {
            case 1:
              o.pallindrome(num);
              break;
            
            case 2:
              o.fibonacci(num);
              break;

            default:
              System.out.println("Please enter a valid input");
        }

    }
}