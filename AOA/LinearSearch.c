// Alroy Pereira
// 9631 SE COMPS A
#include <stdio.h>

int linearsearch(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main()
{
    int x, i, a[30], n, z;
    printf("Enter the number of elements=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element=");
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched=");
    scanf("%d", &x);
    z = linearsearch(a, n, x);
    if (z == -1)
    {
        printf("The Element is not present");
    }
    else
    {
        printf("The Element is present at index %d", z);
    }
    return 0;
}
/***********************************************************
OUTPUT:-
Enter the number of elements=7
Enter element=2
Enter element=3
Enter element=4
Enter element=5
Enter element=6
Enter element=7
Enter element=8
Enter the element to be searched=5
The Element is present at index 3
***********************************************************/