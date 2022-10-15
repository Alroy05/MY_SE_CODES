import java.util.*;

class NumberZeroException extends Exception {
    public String toString() {
       return ("No even numbers");
    }
    NumberZeroException(String str) {
    }
 }

class Assign1{
public static void main (String args[]){

int i,evenSum=0,evenCount=0;   //1
double evenAvg, oddAvg;          //2
Scanner scan=new Scanner(System.in);

System.out.print("Enter the value of num: "); //3
int num=scan.nextInt();

for(i=1; i<=num; i++){        //4
    if(i % 2==0){              //5
        evenSum=evenSum+i;
        evenCount++;
    }
}

try
{
    if(evenCount==0)
    {
        throw new NumberZeroException("This is a custom message");
    }
}   
catch(NumberZeroException e)
{
    System.out.println(e);
}

evenAvg=evenSum/evenCount;  

System.out.print("Average of even numbers are: "+evenAvg);
    
}
}