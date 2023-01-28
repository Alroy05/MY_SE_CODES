#include<stdio.h>

int main()
{
    int arr[100],n,temp,flag=1;
    printf("Enter the total elements\n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n  && flag==1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}