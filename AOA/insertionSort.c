#include<stdio.h>

int main()
{
    int n,arr[100],flag=1;
    printf("Enter the number of digits to be entered");
    scanf("%d",&n);
    
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
       scanf("%d\n",&arr[i]);
    
    }
     
    
    for(int i=0;i<n-1 && flag==1;i++)
    {
        flag =0;
        for(int j=0;j<n-1-i;j++)
        {
            int temp;
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
        printf("%d\n",arr[i]);
    }

    return 0;
}

