import java.util.*;
import java.lang.*;

class Main1 {
    public static void main(String[] args) {
       System.out.println("Enter 2 strings");
       Scanner sc = new Scanner(System.in);
       String str1 = sc.next();
       String str2 = sc.next();
       StringBuffer s = new StringBuffer(str1);
       s.append(str2);                                    
       System.out.println("After appending: "+s);
       s.insert(5,"Pokemon");                  
       System.out.println("After inserting: "+s);
       s.replace(5,20,"Coldplay");
       System.out.println("After replacing: "+s);
       s.delete(5,20);
       System.out.println("After deleting: "+s);
       s.reverse();
       System.out.println("After reversing: "+s);
       System.out.println("Capacity is: "+s.capacity());
       s.ensureCapacity(25);
       System.out.println("After Ensure Capacity: "+s.capacity());
       System.out.println("The charAt at 4th position: "+s.charAt(3));
       System.out.println("Length is: "+s.length());
       System.out.println("Substring is: "+s.substring(3));
    }
}
