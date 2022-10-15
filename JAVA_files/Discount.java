import java.util.*;

class Discount{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0; i < T; i++)
        {
            int A,B,C,D;
            A = sc.nextInt();
            B = sc.nextInt();
            C = sc.nextInt();
            D = sc.nextInt();
            A = A-C;
            B = B-D;
            if(A<B)
            {
                System.out.println("First");
            }
            else if(B<A)
            {
                System.out.println("Second");
            }
            else 
            {
                System.out.println("Any");
            }
        }
    }
}