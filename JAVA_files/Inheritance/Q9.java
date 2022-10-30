import java.util.*;

class Device
{
String vendorName;
int ramSize;
float OSVersion;
}

interface Loader
{
abstract public void loadOS();
}

class Mobile extends Device implements Loader
{
public void loadOS()
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter the Vendor's Name, Ram Size and OS Version: ");
vendorName=sc.nextLine();
ramSize=sc.nextInt();
OSVersion=sc.nextFloat();
System.out.println("Vendor Name: "+vendorName+", Ram Size: "+ramSize+"GB"+", OS Version: "+OSVersion);
}
}

class Q9
{
public static void main(String[] args)
{
Mobile m=new Mobile();
m.loadOS();
}
}
