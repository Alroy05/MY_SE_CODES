import java.util.*;

interface CheckingAccount
{
    public void chargeMonthlyFee();
    public void chargeTransFee();
} 

class SavingsAccount
{
    int rate=7;
    double depositInterest(double deposit)
    { 
        deposit = deposit + ((rate/100)*deposit);  
        System.out.println("Interest Deposited");
        return deposit;
    }
    void checkBalanceLimit()
    {
        System.out.println("Balance Limit is Rs 1 Lakh");
    }
}

class Bank extends SavingsAccount implements CheckingAccount
{
    double balance=10000;
    double deposit=2000;
    double withdraw=1000;

    public void chargeMonthlyFee()
    {
        System.out.println("A Monthly fee was charged");
    }

    public void chargeTransFee()
    {
        System.out.println("A transaction fee was charged");
    }

    void getBalance()
    {
        deposit=depositInterest(deposit);
        balance = balance + deposit - withdraw;
        System.out.println("Final Balance is: "+balance);
    }
}

public class Q1 {
    public static void main(String[] args) {
        Bank b = new Bank();
        b.getBalance();
        b.checkBalanceLimit();
        b.chargeMonthlyFee();
        b.chargeTransFee();
       
    }
    
}
