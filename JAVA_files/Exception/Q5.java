import java.util.*;

class InputException extends Exception{
      public String toString()
      {
        return ("Invalid input");
      }
      InputException(String str)
      {

      }

}

class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter a number between 1 to 10");
        int number = sc.nextInt();

        try
        {
            if(number>10)
            {
                throw new InputException(" ");
            }
            else
            {
                System.out.println("Square of the number is "+number*number);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        
    }
    
}
