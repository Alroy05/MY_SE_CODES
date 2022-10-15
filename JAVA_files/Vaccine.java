import java.util.*;

class ID{
    String Name;
    int age;
    int AddharCard;
    int novaccine;
}

class display extends ID{
   void display_vaccine1(){
    if(super.novaccine==1)
    {
        System.out.println("One more shot to go! "+super.Name);
    }
    else
    {
        System.out.println("You are fully vaccinated! "+super.Name);
    }

   }
}
class Vaccine{
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    display a = new display();
    display b = new display();

    System.out.println("Enter the details of the person 1\n1.Name\n2.Age\n3.AddharCard No.\n4.No.of vaccines taken");
    a.Name= sc.nextLine();
    a.age=sc.nextInt();
    a.AddharCard=sc.nextInt();
    a.novaccine=sc.nextInt();
    System.out.println("Enter the details of the person 2\n1.Name\n2.Age\n3.AddharCard No.\n4.No.of vaccines taken");
    b.Name= sc.next();
    b.age=sc.nextInt();
    b.AddharCard=sc.nextInt();
    b.novaccine=sc.nextInt();
    
    a.display_vaccine1();
    b.display_vaccine1();
    }                         
    
}
