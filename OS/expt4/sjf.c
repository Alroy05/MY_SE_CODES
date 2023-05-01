#include<stdio.h>

void main()
{
    int p;
    printf("Enter the number of process\n");
    scanf("%d",&p);
    
    int bt[p], at[p];
    printf("Enter the Burst time & arrival time for the process\n");
    for(int i=1; i<=p; i++)
    {
        printf("Burst time for process%d: ",i);
        scanf("%d",&bt[i]);
        
        printf("Arrival time for process%d: ",i);
        scanf("%d",&at[i]);
    }
    
    int t1,t2;
    for(int i=1; i<=p; i++)
    {
       
        for(int j=1; j<=p-i; j++)
        {
            if(j!=1)
            {
                if(bt[j]>bt[j+1])
                {
                    t1=bt[j];
                    bt[j]=bt[j+1];
                    bt[j+1]=t1;
                    
                    t2=at[j];
                    at[j]=at[j+1];
                    at[j+1]=t2;
                }
            }
            
        }
        
        
    }
    
    printf("TABLE\n");
    for(int i=1; i<=p; i++)
    {
        printf("process%d\t",i);
        printf("%d\t",bt[i]);
        printf("%d\t",at[i]);
        printf("\n");
    }
    
    // calculating Waiting time
    int wt[p];
    for(int i=1; i<=p; i++)
    {
        if(i==1)
        {
            wt[i]=0;
        }
        else
        {
            int x=0;
            for(int j=i; j>1; j--)
            {
                x=x+bt[j-1];
            }
            wt[i]=x-at[i];
        }   
    }
    
    printf("\nWaiting Time\n");
    for(int i=1; i<=p; i++)
    {
        printf("%d\t",wt[i]);    
    }
    
    printf("\nTurn arround time\n");
    int tat[p];
    for(int i=1; i<=p; i++)
    {
        tat[i]=wt[i]+bt[i];   
    }
    
    for(int i=1; i<=p; i++)
    {
        printf("%d\t",tat[i]);    
    }
    
    // //Average waiting time and average turn arround time
    int sum_wt=0;
    int sum_tat=0;
    for(int i=1; i<=p; i++)
    {
        sum_wt=sum_wt+wt[i];
        sum_tat=sum_tat+tat[i];   
    }
    double avg_sum_wt=sum_wt/p;
    double avg_sum_tat=sum_tat/p;
    printf("\nAverage waiting time: %f",avg_sum_wt);
    printf("\nAverage turn around time: %f",avg_sum_tat);
    
}