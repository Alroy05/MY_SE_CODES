#include<stdio.h>

int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,pos,temp;
    float total=0.0,avg_wt,avg_tat;

    printf("\n------------------------------------------------------------------------------------------------\n");
	printf("\n Enter the total number of process in the system : ");
	scanf("%d", &n);
	printf("\n------------------------------------------------------------------------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("\n Enter the Burst Time and Priority of the Process[%d]\n", i+1);

		printf(" Burst Time : "); // Accept the Burst time
		scanf("%d", &bt[i]);

        printf(" Priority : ");//Accept the priority
        scanf("%d",&pr[i]);
        printf("\n------------------------------------------------------------------------------------------------\n");
        p[i]=i+1;           //contains process number
    }

    //sorting burst time, priority and process number in ascending order using selection sort
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

    wt[0]=0;	//waiting time for first process is zero

    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];

        total+=wt[i];
    }

    avg_wt=total/n;      //average waiting time
    total=0.0;

    printf("\n Process No \t\t Burst Time \t\t Turnaround Time \t\t Waiting Time ");

    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\n  P[%d] \t\t\t  %d \t\t\t  %d \t\t\t\t %d",p[i],bt[i],tat[i],wt[i]);
    }
    printf("\n------------------------------------------------------------------------------------------------\n");
    avg_tat=total/n;     //average turnaround time
    printf("\n Average Waiting Time : %f ms\n",avg_wt);
    printf("\n Average Turnaround Time : %f ms\n",avg_tat);
    printf("\n------------------------------------------------------------------------------------------------\n");
	return 0;
}



