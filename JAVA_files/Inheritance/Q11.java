import java.util.*;

class Member
{
    Scanner sc = new Scanner(System.in);
    String Name;
    int Age;
    int phoneNumber;
    String Address;
    int Salary;

    void getData()
    {
        Name = sc.next();
        Age = sc.nextInt();
        phoneNumber = sc.nextInt();
        Address = sc.next();
        Salary = sc.nextInt();
    }

    void printData()
    {
        System.out.println("Employee's Name: "+Name+"\nAge: "+Age+"\nPhone number: "+phoneNumber+"\nAddress: "+Address);

    }

    void printSalary()
    {
        System.out.println("Mr "+Name+"'s Salary is "+Salary);
    }
}

class Employee extends Member
{
    String Specialization,Department;
    Scanner sc = new Scanner(System.in);
    
    void getData1()
    {
        Specialization = sc.next();
        Department = sc.next();
    }
    
    void printData1()
    {
       System.out.println("Specialization: "+Specialization+"\nDepartment: "+Department);
    }
    
}

class Manager extends Member
{
    String Specialization,Department;
    Scanner sc = new Scanner(System.in);

    void getData1()
    {
        Specialization = sc.next();
        Department = sc.next();
    }

    void printData1()
    {
       System.out.println("Specialization: "+Specialization+"\nDepartment: "+Department);
    }   
}

class exptssss
{
    public static void main(String[] args) {
        Employee e = new Employee();
        Manager m = new Manager();

        System.out.println("Enter the Employee's Name,age,Phone number,Address,Salary,Specialization and Department");
        e.getData();
        e.getData1();

        System.out.println("Enter the Manager's Name,age,Phone number,Address,Salary,Specialization and Department");
        m.getData();
        m.getData1();

        e.printData();
        e.printData1();
        e.printSalary();
        m.printData();
        m.printData1();
        m.printSalary();
    }
}