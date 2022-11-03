import Utility.UtoL;
import Utility.Array;
import java.util.*;

public class Demo {
  public static void main(String[] args) {
    UtoL u = new UtoL();
    Array a = new Array();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter name in UPPER case");
    String name = sc.next();

    String lower = u.convert(name);
    System.out.println("Name in lower case is: "+lower);
    a.toCheck();

  }    
}
