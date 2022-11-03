package Utility;
import java.util.*;

public class Array
{
    public void toCheck()
    {
       Scanner sc = new Scanner(System.in);
       int a[][] = new int[10][10];
       System.out.println("Enter the elements of the matrix");
       for(int i =0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            a[i][j]=sc.nextInt();
        }
       }
       int flag=0;
       label:for(int i =0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=a[j][i])
            {
               flag = 1;
               break label;
            }
        }
       }
       
       if(flag==0)
       {
        System.out.println("The matrix is sym");
       }
       else
       {
        System.out.println("The matrix is unsym");
       }
    }
}


