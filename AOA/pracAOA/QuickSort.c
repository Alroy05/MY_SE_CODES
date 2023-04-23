#include<stdio.h>
#include<stdlib.h>

int partition(int a[],int start,int end)
{
    int x=a[start];
    int down = start;
    int up = end;
    int t;

    while(down<up){
        while(a[down]<=x && down<end)
           down++;
        
        while(a[up]>x && up>=start)
           up--;

        if(down<up)
        {
            t=a[down];
            a[down]=a[up];
            a[up]=t;
        }
    }
    a[start]=a[up];
    a[up]=x;
    return up;   
}
void quicksort(int arr[],int start,int end)
{
     int loc;
     if(start==end)
     {
        return;
     }
     else if(start<end)
     {
        loc=partition(arr,start,end);
        quicksort(arr,start,loc-1);
        quicksort(arr,loc+1,end);
     }
}

int main()
{
    int arr[100],i,j,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}