/****************
Alroy Pereira
SE COMPS A 9631
****************/
#include<stdio.h>

typedef struct{
    int deadline;
    int profit;
}job;

void sort(int num,job j[10])
{  
  int n,flag=1;
  n=num;
  for(int i=0;i<n-1 && flag==1;i++)
    {
        flag =0;
        for(int k=0;k<n-1-i;k++)
        {
            job temp;
            if(j[k].profit<j[k+1].profit)
            {
            temp=j[k];
            j[k]=j[k+1];
            j[k+1]=temp;
            flag=1;
            }
        }
    }
}

int main()
{
    int n,dmax=0,sum=0;
    printf("Enter the number of jobs\n");
    scanf("%d",&n);
    job j[n];
    int Profit[n];
    printf("Enter the profit and dealine of jobs\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&j[i].profit);
       scanf("%d",&j[i].deadline);        
    }
    for(int i=0;i<n;i++)
    {
        if(dmax<j[i].deadline)
        {
            dmax=j[i].deadline;
        }
    }
    printf("%d",dmax);
    sort(n,j);
    job sq[dmax];
    for(int i=0;i<dmax;i++)
    {
        sq[i].profit=-1;
    }

    for(int i=0;i<n;i++)
    {
        for(int k=j[i].deadline-1;k>=0;k--)
        {
            if(sq[k].profit==-1)
            {
                sq[k]=j[i];
                break;
            }
        }
    }   

    for(int i=0;i<dmax;i++)
    {
        sum= sum + sq[i].profit;
    }

    printf("Maximum profits will be %d",sum);
    return 0;
}
/**********************************************
Output:-
Enter the number of jobs
5
Enter the profit and dealine of jobs
60 2
100 1
20 3
40 2
20 1
Maximum profits will be 180
**********************************************/