/******************
  Alroy Pereira
  9631 SE COMPS A
*******************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
void findMinMax(int a[],int low,int high,int *min,int *max)
{
    int minL, minR, maxL, maxR, mid;
	if(high == low)
        *min = *max = a[low];
    else if(low+1 == high)
    {
        if(a[low]<a[high])
        {
            *min = a[low];
            *max = a[high];
        }
        else
        {
            *min = a[high];
            *max = a[low];
        }
    }
    else
    {
        mid = ( low + high )/2;
        findMinMax(a, low, mid, &minL, &maxL);
        findMinMax(a, mid+1, high, &minR, &maxR );

        if(minL < minR)
            *min = minL;
        else
            *min = minR;

        if(maxL > maxR)
            *max = maxL;
        else
            *max = maxR;
    }
}
int main()
{
	int a[SIZE], i, n,min,max, low = 0, high;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    high = n-1;
    findMinMax(a, low, high, &min, &max);
    printf(" The minimum element is : %d\n The maximum element is : %d", min, max);
	return 0;
}
/****************************************************
 Enter the number of elements in the array : 5
 Enter the elements of the array : 45 23 98 67 78
 The minimum element is : 23
 The maximum element is : 98
****************************************************/
