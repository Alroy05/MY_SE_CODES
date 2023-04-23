#include<stdio.h>

int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,pos,temp;
    float total=0.0,avg_wt,avg_tat;

	printf("\n Enter the total number of process in the system : ");
	scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter the Burst Time and Priority of the Process[%d]\n", i+1);

		printf(" Burst Time : "); 
		scanf("%d", &bt[i]);

        printf(" Priority : ");
        scanf("%d",&pr[i]);
        p[i]=i+1;           
    }

    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }

        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;

        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }

    wt[0]=0;	

    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];

        total+=wt[i];
    }

    avg_wt=total/n;      
    total=0.0;

    printf("\n Process No \t\t Burst Time \t\t Turnaround Time \t\t Waiting Time ");

    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];    
        total+=tat[i];
        printf("\n  P[%d] \t\t\t  %d \t\t\t  %d \t\t\t\t %d",p[i],bt[i],tat[i],wt[i]);
    }
    avg_tat=total/n;     
    printf("\n Average Waiting Time : %f ms\n",avg_wt);
    printf("\n Average Turnaround Time : %f ms\n",avg_tat);
	return 0;
}



