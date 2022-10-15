#include<stdio.h>
int main()
{
int i,j,row,col,temp;
printf("Enter no. of rows and columns");
scanf("%d%d",&row,&col);
int mat[row][col];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("enter element");
scanf("%d",&mat[i][j]);
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d \t",mat[i][j]);
}
printf("\n");
}

for(i=0;i<row;i++)
{
  for(j=0;j<i;j++)
  {
  temp=mat[i][j];
  mat[i][j]=mat[j][i];
  mat[j][i]=temp;
  }
  }
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
     printf("%d \t",mat[i][j]);
     }
   printf("\n");
  }
  return 0;
  }
