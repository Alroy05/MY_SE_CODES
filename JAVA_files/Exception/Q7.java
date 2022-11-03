import java.util.*;

class InputException extends Exception{
    InputException()
    {
       System.out.println("Invalid input");
    }

}

public class Q7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the internal and external marks");
        int InternalMarks = sc.nextInt();
        int ExternalMarks = sc.nextInt();
        
        try{
            if(InternalMarks>40)
            {
                throw new InputException();
            }
            else if(ExternalMarks>60)
            {
                throw new InputException();
            }
            else
                System.out.println("The total marks are: "+(InternalMarks+ExternalMarks));   
        }
        catch(Exception e)
        {
            System.out.println(e);
        }

    }
    
}
