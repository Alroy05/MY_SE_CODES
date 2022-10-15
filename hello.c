#include <stdio.h>
void main()
{
    int a[10][10],m,n,i,j;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("Enter a value:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix is:\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            a[j][i]=a[i][j];
        }
    }
    printf("Transpose Matrix is:\n");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   
}