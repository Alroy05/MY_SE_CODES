#include <stdio.h>
int factorial(int);
int main() 
{
    int n,r,npr,ncr;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
    npr = factorial(n)/factorial(n-r);
    ncr = npr/factorial(r);
    printf("\n nPr = %d",npr);
    printf("\n nCr = %d",ncr);
    return 0;
}

int factorial(int n)
{
    int f = 1,i;
    for(i =1;i<=n;i++)
    {
        f = f * i;
    }
    return f;
}