import java.util.Scanner;

class NoMatchException extends Exception
{

    NoMatchException()
    {
        System.out.println("NO MATCH FOUND");
    }
}

class Q4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Which country do you live");
        String country = sc.next();

        try
        {
            if(country.equals("India"))
            {
                System.out.println("You are an Indian citizen");    
            }
            else
            {
                throw new NoMatchException();   
            }
        }
        catch(Exception e)
        {
        }   
    }   
}
