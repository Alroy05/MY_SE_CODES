import java.util.*;

abstract class Bank
{
    abstract void getBalance();
}

class BankA extends Bank
{
    void getBalance()
    {
        int balance = 100;
        System.out.println("The balance in BankA is: "+balance);
    }

}

class BankB extends Bank
{
    void getBalance()
    {
        int balance = 200;
        System.out.println("The balance in BankB is: "+balance);
    }
}

class BankC extends Bank
{
    void getBalance()
    {
        int balance = 300;
        System.out.println("The balance in BankC is: "+balance);
    }
}

class Q10
{
    public static void main(String[] args) {
        BankA a = new BankA();
        BankB b = new BankB();
        BankC c = new BankC();

        a.getBalance();
        b.getBalance();
        c.getBalance();
    }
}
