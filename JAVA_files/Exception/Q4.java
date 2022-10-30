import java.util.Scanner;

class NoMatchException extends Exception
{
    public String toString()
    {
        return ("NO MATCH FOUND");
    }

    NoMatchException(String str)
    {

    }
}

class Q4{
    public static void main(String[] args) {
        String country;
        String Mycountry = new String("India");
        Scanner sc = new Scanner(System.in);
        System.out.println("Which country do you live");
        country = sc.next();

        try
        {
            if(!country.equals(Mycountry))
            {
                throw new NoMatchException(" ");
            }
            else
            {
                System.out.println("You are an Indian citizen");
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        
    }   
}
