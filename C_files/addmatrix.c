#include<stdio.h>

int main()
{
int i, j, row, col, mat1[row][col],mat2[row][col],add[row][col]; 
printf ("Enter the number of rows and columns");
scanf ("%d%d", &row, &col);
for (i=0;i<row;i++)                  //take values of matrix 1
{
  for (j=0; j<col;j++)
  {
    printf("Enter elments of matrix 1 \n");
    scanf("%d",&mat1[i][j]);
  }
} 
for (i=0; i<row; i++)                 //take values of matrix 2
{
  for(j=0; j<col;j++)
  {
    printf("Enter elements of matrix 2 \n"); 
    scanf("%d", &mat2[i][j]);
  }
}
printf("Matrix 1 is \n");
for (i=0; i<row; i++)               //print values of matrix 1
{
  for (j=0; j<col; j++)
  {
    printf("%d \t",mat1[i][j]); 
  }
  printf("\n");
}
printf("Matrix 2 is \n");
for (i=0; i<row; i++)              //print values of matrix 2
{
  for (j=0; j<col; j++)
  {
    printf("%d \t",mat2[i][j]); 
  }
  printf("\n");
}
for (i=0; i<row;i++)               //perform addition of matrices
{
  for (j=0; j<col;j++)
  {
    add[i][j] = mat1[i][j] + mat2[i][j];
  }
}
printf("The adition of both matrices is \n");
for (i=0; i<row; i++)             //print result of addition
{
  for (j=0; j<col; j++)
  {
    printf("%d \t",add[i][j]); 
  }
  printf("\n");
}

return 0;
}