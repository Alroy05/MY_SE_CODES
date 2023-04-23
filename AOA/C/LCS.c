#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int matrix[10][10]={0},direction[10][10]={0};
char str1[10]={0},str2[10]={0},sub[10]={0};
int m,n,i,j,len=0;

int main()
{
    printf("Enter the 1st string");
    scanf("%s",str1);

    printf("Enter the 2nd string");
    scanf("%s",str2);
    
    m=strlen(str1);
    n=strlen(str2);
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                matrix[i][j]=matrix[i-1][j-1]+1;
                direction[i][j]=1;
            }
            else if(matrix[i][j-1]>matrix[i-1][j])
            {
                matrix[i][j]=matrix[i][j-1];
                direction[i][j]=2;
            }
            else
            {
                matrix[i][j]=matrix[i-1][j];
                direction[i][j]=3;
            }
        }
    }

    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d\t",direction[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    while(1)
    {
        if(direction[m][n]==0)
           break;
        else if(direction[m][n]==1)
        {
           sub[len]=str1[m-1];
           m-=1;
           n-=1;
           len++;
        }
        else if(direction[m][n]==3)
        {
           m-=1;
        }
        else
        {
            n-=1;
        }
    }
    printf("The longest comman sub-sequence : %s",sub);
}
