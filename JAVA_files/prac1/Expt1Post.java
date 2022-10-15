import java.util.*;

public class Expt1Post{
    public static void main(String[] args){

    System.out.println("Enter a number");
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    
    Fact f = new Fact();
    int z = f.fact(num);

    System.out.println("Factorial is "+z);

    }

public static class Fact{
  static int fact(int num){
   
  if(num==1)
    return 1;
   else
   return num*(fact(num-1));
  }
}
}

