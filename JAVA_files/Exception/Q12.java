import java.util.*;
class InputException extends Exception
{
    String ToString()
    {
        return ("Wrong Input");
    }
    InputException(String str)
    {

    }
}

class Q12
{
    public static void main(String[] args) {
        try{
            int a=10,b=0;
            int result= a/b;
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }

        int arr[] = {1,2,3};
        try
        {
            System.out.println(arr[4]);
        }
        catch(ArrayIndexOutOfBoundsException e1)
        {
            System.out.println(e1);
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter a number between 1 to 10");
        int number = sc.nextInt();

        try{
            if(number>10)
            {
                throw new InputException(" ");
            }
            else
            {
                System.out.println("The square of the number is "+(number*number));

            }
        }
        catch(Exception e2)
        {
            System.out.println(e2);
        }
        finally
        {
            System.out.println("This is finally block being executed\nEnd of program showing 3 exceptions");
        }
    }
}