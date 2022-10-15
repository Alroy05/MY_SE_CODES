import java.util.*;
class PayOutOfBoundException extends Exception {
   public String toString() {
      return ("Basic salary is invalid");
   }
   PayOutOfBoundException(String str) {
   }
}
class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter basic salary");
        double basic = sc.nextDouble();
     
        try {
            if(basic<8000)
            {
              throw new PayOutOfBoundException("This is a custom message");
            }
        } catch(PayOutOfBoundException e) {
         System.out.println(e);
      }
        double DA = basic*0.05;
        double HRA = basic*0.02;
        double TA = 1000.0;
        double PT = basic*0.2;
        double TDS = basic*0.07;
        double Total = basic + DA + HRA + TA - PT - TDS;
        if(basic>8000)
        System.out.println("Gross Salary:"+Total);  
    }
}

