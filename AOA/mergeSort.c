// ALROY PEREIRA
// 9631 SE COMPS A
#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int Left[n1],Right[n2];

    for(int i=0;i<n1;i++)
    {
        Left[i]=a[i+low];
    }
    for(int j=0;j<n2;j++)
    {
        Right[j]=a[j+mid+1];
    }
    int i=0,j=0;
    for(int k=low;k<=high;k++)
    {
        if(i<n1 && j<n2)
        {
            if(Left[i]<=Right[j])
            {
                a[k]=Left[i];
                i++;
            }
            else
            {
                a[k]=Right[j];
                j++;
            }
        }
        else if(j<n2)
        {
            a[k]=Right[j];
            j++;
        }
        else if(i<n1)
        {
            a[k]=Left[i];
            i++;
        }
    }
}
void mergeSort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    
    mergeSort(arr,0,n-1);
    printf("The Sorted elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
/***********************************************
Enter the number of elements: 5
Enter the elements: 2
9
3
8
4
The Sorted elements are: 2 3 4 8 9 
***********************************************/