import java.util.*;

class Main2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector v = new Vector();
        System.out.println("Enter the number of statements to be entered");
        int n= sc.nextInt();
        for(int i=0;i<n;i++)
        {
          v.add(sc.next());
        }
        System.out.println("Added elements: "+v);
        System.out.println("Enter a string");
        String str = sc.next();
            if(v.contains(str)==true)
               v.remove(str);
            else
               v.add(str);
        System.out.println(v);
    }    
}
