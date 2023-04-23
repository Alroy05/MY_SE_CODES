#include<stdio.h>
#include<stdlib.h>
// wsf-weight so far
//wr-weight remaining
int w[100]={0},sol[10]={0};
int n,maxWeight,totalWeight;

int promising(int level,int wsf,int wr)
{
    if(wsf+w[level]<=maxWeight && wr + wsf >= maxWeight)
    {
        return 1;
    }
    else
       return 0;
}
void subset(int level,int wsf,int wr)
{
    if(wsf==maxWeight)
    {
        printf("Solution: ");
        for(int i=1;i<=n;i++)
        {
            printf("\t%d",sol[i]);
        }
        printf("\n");
    }
    else if(promising(level,wsf,wr))
    {
        sol[level+1]=1;
        subset(level+1,wsf+w[level],wr-w[level]);
        sol[level+1]=0;
        subset(level+1,wsf,wr-w[level]);
    }
}
int main()
{
    printf("Enter the number of items:\n");
    scanf("%d",&n);
    printf("Enter the weights of items:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
        totalWeight=totalWeight+w[i];
    }
    printf("Enter the maximum permitted weight:\n");
    scanf("%d",&maxWeight);
    subset(0,0,totalWeight);
}