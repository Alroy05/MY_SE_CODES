// ALROY PEREIRA
// 9631 SE COMPS A
#include <stdio.h>
int recur_binary_search(int a[], int low, int high, int x)
{
    int mid;
    if (low == high)
    {
        if (a[low] == x)
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        mid = (low + high) / 2;
        if (x == a[mid])
        {
            return mid;
        }
        else if (x < a[mid])
        {
            return (recur_binary_search(a, low, mid - 1, x));
        }
        else if (x > a[mid])
        {
            return (recur_binary_search(a, mid + 1, high, x));
        }
    }
}
int main()
{
    int a[100], n, i, x, z;
    printf("Enter number of elements=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element=");
        scanf("%d", &a[i]);
    }
    printf("\nEnter element to be searched=");
    scanf("%d", &x);
    z = recur_binary_search(a, 0, n - 1, x);
    if (z == -1)
    {
        printf("\nElement is not present...");
    }
    else
    {
        printf("\nElement is present at index %d", z);
    }
    return 0;
}
/************************************************
OUTPUT:-
Enter number of elements=7
Enter element=1
Enter element=2
Enter element=3
Enter element=4
Enter element=5
Enter element=6
Enter element=7
Enter element to be searched=5
Element is present at index 4
************************************************/