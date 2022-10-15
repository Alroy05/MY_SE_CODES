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
class VaccineN{
    public static void main(String[] args)
    {
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter the number of people");
    int n = sc.nextInt();
    int i=1;
    display a[] = new display[n];
   
   

    for(i = 1;i<=n;i++)
    {
    System.out.println("Enter the details of the person "+(i)+"\n1.Name\n2.Age\n3.AddharCard No.\n4.No.of vaccines taken");
    a[i].Name= sc.next();
    a[i].age=sc.nextInt();
    a[i].AddharCard=sc.nextInt();
    a[i].novaccine=sc.nextInt();
    }
    
    for(i=1;i<n;i++)
    {
    a[i].display_vaccine1();
    }
    
    }                         
    
}
