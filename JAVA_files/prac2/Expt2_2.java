import java.util.*;
class OPS
{
    double median(int a[],int n)
    {
        Arrays.sort(a);

        if(n%2 != 0)
        return  a[n/2];
        else
        return (a[n/2]+a[(n-1)/2])/2.0;

    }

    int Fmode(int a[],int n)
    {
        int max = Arrays.stream(a).max().getAsInt();
        int t = max + 1;
        int[] count = new int[t];
        for (int i = 0; i < t; i++)
        {
            count[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
        }

        int mode = 0;
        int k = count[0];
        for (int i = 1; i < t; i++)
        {
            if (count[i] > k)
            {
                k = count[i];
                mode = i;
            }
        }
        return mode;
    }
   
}

class Expt2_2
{ 
  public static void main(String[] args)
  {
    int a[] = {1,2,8,4,5,6,7,8,3,8};
    int n = a.length;
    
    OPS m = new OPS();
    System.out.println("Median is "+m.median(a,n));
    System.out.println("Mode is "+m.Fmode(a,n));
  }
}