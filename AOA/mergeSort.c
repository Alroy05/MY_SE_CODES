#include<stdio.h>

void merge(int arr[],int beg,int mid,int end)
{
    int temp[20],index=beg,i=beg,j=mid+1,k=beg;

    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp[index]=arr[i];
            i++;
            index++;

        }
        else{
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    if(j<=end)
    {
        while(j<=end)
        {
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    if(i<=mid)
    {
        while(i<=mid)
        {
            temp[index]=arr[i];
            i++;
            index++;
        }
    }
    for(k=beg;k<=end;k++)
    {
        arr[k]=temp[k];
    }
}

void mergeSort(int arr[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}

int main()
{
    int arr[20],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}