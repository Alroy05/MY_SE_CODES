import java.util.*;

class Expt2Post2
{
    public static void main(String[] args)
    {
       System.out.println("Enter the dimensions");
       Scanner sc = new Scanner(System.in);
       int r = sc.nextInt();
       System.out.println("Enter the elements of the");
       int[][] a = new int[r][r];
       for(int i =0;i<r;i++)
       {
        for(int j=0;j<r;j++)
        {
          a[i][j]=sc.nextInt();
        }
       }
       
       int f=0;
       xyz:for(int i =0;i<r;i++)
       {
        for(int j=0;j<i;j++)
        {
          if(a[i][j]!=a[j][i])
          {
             f=1;
             break xyz;
          }
        }
       }

       if(f==1)
       System.out.println("Asymmetric matrix");
       else
       System.out.println("Symmetric matrix");
    }
}