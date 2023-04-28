#include<stdio.h>
#include<stdlib.h>

void knapsack(int num,float weight[],float profit[],int capacity){
    int u = capacity;
    float sol[20];
    int i;
    float tp=0.0;

    for(i=0;i<num;i++)
    {
        sol[i]=0.0;
    }

    for(i=0;i<num;i++)
    {
        if(weight[i]>u)
        {
            break;
        }
        else{
            u = u - weight[i];
            tp = tp + profit[i];
            sol[i] = 1.0;
        }
    }

    if(i<num)
    {
        sol[i] = u/weight[i];
    }

    tp = tp + (profit[i]*sol[i]);
    
    printf("Solution vector: ");
    for(i=0;i<num;i++)
    {
        printf("%f",sol[i]);
    }
    printf("\nThe maximum profit is: %f",tp);
}

int main()
{
     float weight[20],profit[20],ratio[20],temp;
     int n,capacity;
     printf("Enter the number of objects: ");
     scanf("%d",&n);
     printf("Enter the profit and weight of the objects: ");
     for(int i=0;i<n;i++)
     {
        scanf("%f%f",&profit[i],&weight[i]);
     }
     
     printf("Enter the capacity of knapsack: ");
     scanf("%d",&capacity);
     for (int i = 0; i < n; i++) 
     {
        ratio[i] = profit[i] / weight[i];
     }

     for(int i =0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if (ratio[i] < ratio[j])
         {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
        }
     }
     knapsack(n, weight, profit, capacity);
   return(0);
}