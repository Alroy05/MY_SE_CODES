#include<stdio.h>

int main()
{
    int arr[100],n,temp,index;
    printf("Enter the total elements\n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        index =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[index]>arr[j])
            {
                index=j;
            }
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}